// Copyright (c) 2019-2023 hors<horsicq@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#ifndef INSTALLMODULEPROCESS_H
#define INSTALLMODULEPROCESS_H

#include <QElapsedTimer>
#include <QObject>

#include "utils.h"
#include "xzip.h"

class InstallModuleProcess : public QObject {
    Q_OBJECT

public:
    explicit InstallModuleProcess(QObject *pParent = nullptr);
    void setData(QString sDataPath, QString sRootPath, QList<QString> listModuleFileNames, XBinary::PDSTRUCT *pPdStruct);
    void stop();
    Utils::STATS getCurrentStats();

signals:
    void errorMessage(QString sMessage);
    void infoMessage(QString sMessage);
    void completed(qint64 nElapsedTime);

public slots:
    void process();

private:
    QString sDataPath;
    QString sRootPath;
    QList<QString> listModuleFileNames;
    XBinary::PDSTRUCT *g_pPdStruct;
    Utils::STATS currentStats;
};

#endif  // INSTALLMODULEPROCESS_H

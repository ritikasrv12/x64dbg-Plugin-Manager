[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=NF3FBD3KHMXDN)
[![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/horsicq/x64dbg-Plugin-Manager.svg)](https://github.com/horsicq/x64dbg-Plugin-Manager/releases)
[![GitHub All Releases](https://img.shields.io/github/downloads/horsicq/x64dbg-Plugin-Manager/total.svg)](https://github.com/horsicq/x64dbg-Plugin-Manager/releases)

x64dbg Plugin Manager
=======

![alt text](https://github.com/horsicq/x64dbg-Plugin-Manager/blob/master/docs/screenshot_gui.jpg "Screenshot gui")
![alt text](https://github.com/horsicq/x64dbg-Plugin-Manager/blob/master/docs/screenshot_console.jpg "Screenshot console")

Download
=======

https://github.com/horsicq/x64dbg-Plugin-Manager/releases/tag/Beta

Console example
=======

x64plgmnrc.exe -G "C:\x64dbg_root"  // Set root path for x64dbg

x64plgmnrc.exe -U                   // Update list from server

x64plgmnrc.exe -S                   // Show list of plugins

x64plgmnrc.exe -i x64core           // Install last version of x64dbg

x64plgmnrc.exe -i AdvancedScript    // install AdvancedScript


# How to build on Windows
=======

Install Visual Studio 2013: https://github.com/horsicq/build_tools

Install Qt 5.6.3 for VS2013(x86): https://github.com/horsicq/build_tools

Install 7-Zip: https://github.com/horsicq/build_tools

Clone project: git clone --recursive https://github.com/horsicq/x64dbg-Plugin-Manager.git

Edit build_win32.bat ( check VS_PATH,  SEVENZIP_PATH, QT_PATH variables)

Run build_win32.bat


# How to add new plugin
=======

You should make PR with new plugin to https://github.com/x64dbg/PluginManager/blob/master/list.json

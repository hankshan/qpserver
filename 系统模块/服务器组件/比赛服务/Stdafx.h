#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#ifndef WINVER
#define WINVER 0x0502
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0502
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0502
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0601
#endif

#define _ATL_ATTRIBUTES
#define _AFX_ALL_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS



#include <afxwin.h>         // MFC 核心组件和标准组件

#include <afxext.h>         // MFC 扩展



#ifndef _AFX_NO_OLE_SUPPORT

#include <afxole.h>         // MFC OLE 类

#include <afxodlgs.h>       // MFC OLE 对话框类

#include <afxdisp.h>        // MFC 自动化类

#endif // _AFX_NO_OLE_SUPPORT



#include <afxdtctl.h>   // MFC 对 Internet Explorer 4 公共控件的支持

#ifndef _AFX_NO_AFXCMN_SUPPORT

#include <afxcmn.h>     // MFC 对 Windows 公共控件的支持

#endif // _AFX_NO_AFXCMN_SUPPORT



//////////////////////////////////////////////////////////////////////////



//组件头文件


#include "..\..\服务器组件\游戏服务\GameServiceHead.h"

//////////////////////////////////////////////////////////////////////////////////
//链接代码

#ifndef _DEBUG
#ifndef _UNICODE
#pragma comment (lib,"../../链接库/Ansi/ServiceCore.lib")
#pragma comment (lib,"../../链接库/Ansi/GameService.lib")
#pragma comment (lib,"../../链接库/Ansi/KernelEngine.lib")
#else
#pragma comment (lib,"../../链接库/Unicode/ServiceCore.lib")
#pragma comment (lib,"../../链接库/Unicode/GameService.lib")
#pragma comment (lib,"../../链接库/Unicode/KernelEngine.lib")
#endif
#else
#ifndef _UNICODE
#pragma comment (lib,"../../链接库/Ansi/ServiceCoreD.lib")
#pragma comment (lib,"../../链接库/Ansi/GameServiceD.lib")
#pragma comment (lib,"../../链接库/Ansi/KernelEngineD.lib")
#else
#pragma comment (lib,"../../链接库/Unicode/ServiceCoreD.lib")
#pragma comment (lib,"../../链接库/Unicode/GameServiceD.lib")
#pragma comment (lib,"../../链接库/Unicode/KernelEngineD.lib")
#endif
#endif

//////////////////////////////////////////////////////////////////////////




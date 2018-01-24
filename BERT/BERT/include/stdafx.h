
#pragma once

#define  WINVER			0x0501

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif // #ifndef _WIN32_WINNT

#define ISOLATION_AWARE_ENABLED 1

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <Commdlg.h>
#include <objbase.h>
#include <process.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <string>
#include <list>
#include <vector>
#include <unordered_map>
#include <regex>
#include <sstream>
#include <algorithm>

// TODO: reference additional headers your program requires here

#pragma comment(linker,"\"/manifestdependency:type='win32' \
	name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
	processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "debug_functions.h"

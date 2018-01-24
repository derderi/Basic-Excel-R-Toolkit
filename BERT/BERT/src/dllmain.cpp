// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

HMODULE global_module_handle;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    global_module_handle = hModule;

    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
#ifdef _DEBUG
      dbg_stream_for_stdio::InitStreams();
      std::cout << " ** redirecting streams for VS console" << std::endl;
#endif
      break;
    }

    return TRUE;
}


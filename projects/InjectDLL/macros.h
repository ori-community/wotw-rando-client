#pragma once

#ifdef COMPILING_INJECTDLL
#define INJECT_DLLEXPORT __declspec(dllexport)
#define INJECT_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define INJECT_DLLEXPORT __declspec(dllimport)
#define INJECT_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

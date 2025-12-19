#pragma once

#ifdef COMPILING_INJECT_LOADER
#define INJECT_LOADER_DLLEXPORT __declspec(dllexport)
#define INJECT_LOADER_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define INJECT_LOADER_DLLEXPORT __declspec(dllimport)
#define INJECT_LOADER_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

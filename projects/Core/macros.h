#pragma once

#ifdef COMPILING_CORE
#define CORE_DLLEXPORT __declspec(dllexport)
#define CORE_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define CORE_DLLEXPORT __declspec(dllimport)
#define CORE_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

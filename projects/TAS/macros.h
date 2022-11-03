#pragma once

#ifdef COMPILING_TAS
#define TAS_DLLEXPORT __declspec(dllexport)
#define TAS_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define TAS_DLLEXPORT __declspec(dllimport)
#define TAS_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

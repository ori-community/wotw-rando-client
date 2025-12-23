#pragma once

#ifdef COMPILING_TRACY
#define TRACY_DLLEXPORT __declspec(dllexport)
#define TRACY_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define TRACY_DLLEXPORT __declspec(dllimport)
#define TRACY_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

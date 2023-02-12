#pragma once

#ifdef COMPILING_INJECT_LOADER
#define INJECT_LOADER_DLLEXPORT __declspec(dllexport)
#else
#define INJECT_LOADER_DLLEXPORT __declspec(dllimport)
#endif

#pragma once

#if COMPILING_BRIDGE
#define BRIDGE_DLLEXPORT __declspec(dllexport)
#else
#define BRIDGE_DLLEXPORT __declspec(dllimport)
#endif

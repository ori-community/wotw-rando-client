#pragma once

#ifdef COMPILING_RANDOMIZER
#define RANDOMIZER_DLLEXPORT __declspec(dllexport)
#define RANDOMIZER_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define RANDOMIZER_DLLEXPORT __declspec(dllimport)
#define RANDOMIZER_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

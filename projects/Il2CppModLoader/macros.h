#pragma once

#ifdef COMPILING_IL2CPP_MODLOADER
#define IL2CPP_MODLOADER_DLLEXPORT __declspec(dllexport)
#define IL2CPP_MODLOADER_C_DLLEXPORT extern "C" __declspec(dllexport)
#else
#define IL2CPP_MODLOADER_DLLEXPORT __declspec(dllimport)
#define IL2CPP_MODLOADER_C_DLLEXPORT extern "C" __declspec(dllimport)
#endif

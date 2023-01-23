#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSplashInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSplashInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSplashInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinSplashInfo_DEFINED
struct SeinSplashInfo {
    float Power;
    struct Vector3 Velocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSplashInfo_FWDDECL)
#define IL2CPP_STRUCT_SeinSplashInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinSplashInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSplashInfo_DEFINED) && !defined(IL2CPP_STRUCT_SeinSplashInfo_FWDDECL)
#include <Modloader/app/structs/SeinSplashInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSplashInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

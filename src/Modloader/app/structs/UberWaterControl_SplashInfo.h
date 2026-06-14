#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl_SplashInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl_SplashInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_SplashInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl_SplashInfo_DEFINED
struct UberWaterControl_SplashInfo {
    float Time;
    struct Vector3 Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl_SplashInfo_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl_SplashInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberWaterControl_SplashInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl_SplashInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl_SplashInfo_FWDDECL)
#include <Modloader/app/structs/UberWaterControl_SplashInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl_SplashInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

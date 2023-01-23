#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashEffect__Fields_DEFINED
struct ParticleSystem;
struct __declspec(align(8)) WaterSplashEffect__Fields {
    struct ParticleSystem* PS;
    int32_t count;
    float Speed;
    float SideSpeed;
    bool KillYSpeed;
    bool IsWaterPlane;
    bool isBig;
    bool IsDrip;
};
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashEffect__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashEffect__Fields_FWDDECL)
#include <Modloader/app/structs/WaterSplashEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

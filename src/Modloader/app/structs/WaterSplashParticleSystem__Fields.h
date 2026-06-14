#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_DEFINED
struct WaterSplashControl;
struct WaterSplashParticleSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct WaterSplashControl* control;
    bool isBig;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_FWDDECL
#include <Modloader/app/structs/WaterSplashControl.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashParticleSystem__Fields_FWDDECL)
#include <Modloader/app/structs/WaterSplashParticleSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashParticleSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

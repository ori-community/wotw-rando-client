#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashEffect_DEFINED)
#include <Modloader/app/structs/WaterSplashEffect__Fields.h>
#if defined(IL2CPP_STRUCT_WaterSplashEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashEffect_DEFINED
struct WaterSplashEffect__Class;
struct WaterSplashEffect {
    struct WaterSplashEffect__Class* klass;
    MonitorData* monitor;
    struct WaterSplashEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashEffect_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashEffect_FWDDECL
#include <Modloader/app/structs/WaterSplashEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashEffect_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashEffect_FWDDECL)
#include <Modloader/app/structs/WaterSplashEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

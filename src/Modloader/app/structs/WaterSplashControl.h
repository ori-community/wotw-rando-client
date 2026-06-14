#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashControl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashControl_DEFINED)
#include <Modloader/app/structs/WaterSplashControl__Fields.h>
#if defined(IL2CPP_STRUCT_WaterSplashControl__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashControl_DEFINED
struct WaterSplashControl__Class;
struct WaterSplashControl {
    struct WaterSplashControl__Class* klass;
    MonitorData* monitor;
    struct WaterSplashControl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashControl_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashControl_FWDDECL
#include <Modloader/app/structs/WaterSplashControl__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashControl_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashControl_FWDDECL)
#include <Modloader/app/structs/WaterSplashControl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashControl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

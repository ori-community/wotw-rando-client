#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashObject_DEFINED)
#include <Modloader/app/structs/WaterSplashObject__Fields.h>
#if defined(IL2CPP_STRUCT_WaterSplashObject__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashObject_DEFINED
struct WaterSplashObject__Class;
struct WaterSplashObject {
    struct WaterSplashObject__Class* klass;
    MonitorData* monitor;
    struct WaterSplashObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashObject_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashObject_FWDDECL
#include <Modloader/app/structs/WaterSplashObject__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashObject_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashObject_FWDDECL)
#include <Modloader/app/structs/WaterSplashObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

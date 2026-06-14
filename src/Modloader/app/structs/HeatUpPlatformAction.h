#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeatUpPlatformAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeatUpPlatformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction_DEFINED)
#include <Modloader/app/structs/HeatUpPlatformAction__Fields.h>
#if defined(IL2CPP_STRUCT_HeatUpPlatformAction__Fields_DEFINED)
#define IL2CPP_STRUCT_HeatUpPlatformAction_DEFINED
struct HeatUpPlatformAction__Class;
struct HeatUpPlatformAction {
    struct HeatUpPlatformAction__Class* klass;
    MonitorData* monitor;
    struct HeatUpPlatformAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction_FWDDECL)
#define IL2CPP_STRUCT_HeatUpPlatformAction_FWDDECL
#include <Modloader/app/structs/HeatUpPlatformAction__Class.h>
#endif
#undef IL2CPP_STRUCT_HeatUpPlatformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction_DEFINED) && !defined(IL2CPP_STRUCT_HeatUpPlatformAction_FWDDECL)
#include <Modloader/app/structs/HeatUpPlatformAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeatUpPlatformAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

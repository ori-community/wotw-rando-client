#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDebugMenuPage_DEFINED)
#include <Modloader/app/structs/TimeDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_TimeDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeDebugMenuPage_DEFINED
struct TimeDebugMenuPage__Class;
struct TimeDebugMenuPage {
    struct TimeDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct TimeDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_TimeDebugMenuPage_FWDDECL
#include <Modloader/app/structs/TimeDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_TimeDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/TimeDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

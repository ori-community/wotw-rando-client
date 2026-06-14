#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DEFINED)
#include <Modloader/app/structs/LoadDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_LoadDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadDebugMenuPage_DEFINED
struct LoadDebugMenuPage__Class;
struct LoadDebugMenuPage {
    struct LoadDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct LoadDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_LoadDebugMenuPage_FWDDECL
#include <Modloader/app/structs/LoadDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_LoadDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/LoadDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

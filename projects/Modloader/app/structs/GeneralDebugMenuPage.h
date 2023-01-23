#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_DEFINED)
#include <Modloader/app/structs/GeneralDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_GeneralDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_DEFINED
struct GeneralDebugMenuPage__Class;
struct GeneralDebugMenuPage {
    struct GeneralDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct GeneralDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_FWDDECL
#include <Modloader/app/structs/GeneralDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_GeneralDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/GeneralDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

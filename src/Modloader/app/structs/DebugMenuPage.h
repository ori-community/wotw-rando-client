#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuPage_DEFINED)
#include <Modloader/app/structs/DebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuPage_DEFINED
struct DebugMenuPage__Class;
struct DebugMenuPage {
    struct DebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct DebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuPage_FWDDECL
#include <Modloader/app/structs/DebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuPage_FWDDECL)
#include <Modloader/app/structs/DebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

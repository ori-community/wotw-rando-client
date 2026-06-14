#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportDebugMenuPage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportDebugMenuPage_DEFINED)
#include <Modloader/app/structs/TeleportDebugMenuPage__Fields.h>
#if defined(IL2CPP_STRUCT_TeleportDebugMenuPage__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportDebugMenuPage_DEFINED
struct TeleportDebugMenuPage__Class;
struct TeleportDebugMenuPage {
    struct TeleportDebugMenuPage__Class* klass;
    MonitorData* monitor;
    struct TeleportDebugMenuPage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportDebugMenuPage_FWDDECL)
#define IL2CPP_STRUCT_TeleportDebugMenuPage_FWDDECL
#include <Modloader/app/structs/TeleportDebugMenuPage__Class.h>
#endif
#undef IL2CPP_STRUCT_TeleportDebugMenuPage_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportDebugMenuPage_DEFINED) && !defined(IL2CPP_STRUCT_TeleportDebugMenuPage_FWDDECL)
#include <Modloader/app/structs/TeleportDebugMenuPage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportDebugMenuPage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

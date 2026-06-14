#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportOnEnable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportOnEnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportOnEnable_DEFINED)
#include <Modloader/app/structs/TeleportOnEnable__Fields.h>
#if defined(IL2CPP_STRUCT_TeleportOnEnable__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportOnEnable_DEFINED
struct TeleportOnEnable__Class;
struct TeleportOnEnable {
    struct TeleportOnEnable__Class* klass;
    MonitorData* monitor;
    struct TeleportOnEnable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportOnEnable_FWDDECL)
#define IL2CPP_STRUCT_TeleportOnEnable_FWDDECL
#include <Modloader/app/structs/TeleportOnEnable__Class.h>
#endif
#undef IL2CPP_STRUCT_TeleportOnEnable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportOnEnable_DEFINED) && !defined(IL2CPP_STRUCT_TeleportOnEnable_FWDDECL)
#include <Modloader/app/structs/TeleportOnEnable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportOnEnable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

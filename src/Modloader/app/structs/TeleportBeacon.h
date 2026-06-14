#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportBeacon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportBeacon_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportBeacon_DEFINED)
#include <Modloader/app/structs/TeleportBeacon__Fields.h>
#if defined(IL2CPP_STRUCT_TeleportBeacon__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportBeacon_DEFINED
struct TeleportBeacon__Class;
struct TeleportBeacon {
    struct TeleportBeacon__Class* klass;
    MonitorData* monitor;
    struct TeleportBeacon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportBeacon_FWDDECL)
#define IL2CPP_STRUCT_TeleportBeacon_FWDDECL
#include <Modloader/app/structs/TeleportBeacon__Class.h>
#endif
#undef IL2CPP_STRUCT_TeleportBeacon_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportBeacon_DEFINED) && !defined(IL2CPP_STRUCT_TeleportBeacon_FWDDECL)
#include <Modloader/app/structs/TeleportBeacon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportBeacon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

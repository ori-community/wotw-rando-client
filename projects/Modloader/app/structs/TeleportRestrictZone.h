#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportRestrictZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportRestrictZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportRestrictZone_DEFINED)
#include <Modloader/app/structs/TeleportRestrictZone__Fields.h>
#if defined(IL2CPP_STRUCT_TeleportRestrictZone__Fields_DEFINED)
#define IL2CPP_STRUCT_TeleportRestrictZone_DEFINED
struct TeleportRestrictZone__Class;
struct TeleportRestrictZone {
    struct TeleportRestrictZone__Class* klass;
    MonitorData* monitor;
    struct TeleportRestrictZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportRestrictZone_FWDDECL)
#define IL2CPP_STRUCT_TeleportRestrictZone_FWDDECL
#include <Modloader/app/structs/TeleportRestrictZone__Class.h>
#endif
#undef IL2CPP_STRUCT_TeleportRestrictZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportRestrictZone_DEFINED) && !defined(IL2CPP_STRUCT_TeleportRestrictZone_FWDDECL)
#include <Modloader/app/structs/TeleportRestrictZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportRestrictZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerZone_DEFINED)
#include <Modloader/app/structs/TriggerZone__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerZone__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerZone_DEFINED
struct TriggerZone__Class;
struct TriggerZone {
    struct TriggerZone__Class* klass;
    MonitorData* monitor;
    struct TriggerZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerZone_FWDDECL)
#define IL2CPP_STRUCT_TriggerZone_FWDDECL
#include <Modloader/app/structs/TriggerZone__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerZone_DEFINED) && !defined(IL2CPP_STRUCT_TriggerZone_FWDDECL)
#include <Modloader/app/structs/TriggerZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

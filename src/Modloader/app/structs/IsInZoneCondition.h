#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsInZoneCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsInZoneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInZoneCondition_DEFINED)
#include <Modloader/app/structs/IsInZoneCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsInZoneCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsInZoneCondition_DEFINED
struct IsInZoneCondition__Class;
struct IsInZoneCondition {
    struct IsInZoneCondition__Class* klass;
    MonitorData* monitor;
    struct IsInZoneCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsInZoneCondition_FWDDECL)
#define IL2CPP_STRUCT_IsInZoneCondition_FWDDECL
#include <Modloader/app/structs/IsInZoneCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsInZoneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInZoneCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsInZoneCondition_FWDDECL)
#include <Modloader/app/structs/IsInZoneCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsInZoneCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

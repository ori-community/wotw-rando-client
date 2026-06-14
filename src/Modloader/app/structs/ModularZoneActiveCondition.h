#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModularZoneActiveCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModularZoneActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZoneActiveCondition_DEFINED)
#include <Modloader/app/structs/ModularZoneActiveCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ModularZoneActiveCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ModularZoneActiveCondition_DEFINED
struct ModularZoneActiveCondition__Class;
struct ModularZoneActiveCondition {
    struct ModularZoneActiveCondition__Class* klass;
    MonitorData* monitor;
    struct ModularZoneActiveCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModularZoneActiveCondition_FWDDECL)
#define IL2CPP_STRUCT_ModularZoneActiveCondition_FWDDECL
#include <Modloader/app/structs/ModularZoneActiveCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ModularZoneActiveCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModularZoneActiveCondition_DEFINED) && !defined(IL2CPP_STRUCT_ModularZoneActiveCondition_FWDDECL)
#include <Modloader/app/structs/ModularZoneActiveCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModularZoneActiveCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPickupOnCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPickupOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition_DEFINED)
#include <Modloader/app/structs/GetPickupOnCondition__Fields.h>
#if defined(IL2CPP_STRUCT_GetPickupOnCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPickupOnCondition_DEFINED
struct GetPickupOnCondition__Class;
struct GetPickupOnCondition {
    struct GetPickupOnCondition__Class* klass;
    MonitorData* monitor;
    struct GetPickupOnCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition_FWDDECL)
#define IL2CPP_STRUCT_GetPickupOnCondition_FWDDECL
#include <Modloader/app/structs/GetPickupOnCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPickupOnCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition_DEFINED) && !defined(IL2CPP_STRUCT_GetPickupOnCondition_FWDDECL)
#include <Modloader/app/structs/GetPickupOnCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPickupOnCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

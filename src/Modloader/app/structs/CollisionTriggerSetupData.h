#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionTriggerSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionTriggerSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupData_DEFINED)
#include <Modloader/app/structs/CollisionTriggerSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionTriggerSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionTriggerSetupData_DEFINED
struct CollisionTriggerSetupData__Class;
struct CollisionTriggerSetupData {
    struct CollisionTriggerSetupData__Class* klass;
    MonitorData* monitor;
    struct CollisionTriggerSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupData_FWDDECL)
#define IL2CPP_STRUCT_CollisionTriggerSetupData_FWDDECL
#include <Modloader/app/structs/CollisionTriggerSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionTriggerSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupData_DEFINED) && !defined(IL2CPP_STRUCT_CollisionTriggerSetupData_FWDDECL)
#include <Modloader/app/structs/CollisionTriggerSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionTriggerSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

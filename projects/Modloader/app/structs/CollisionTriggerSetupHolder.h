#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionTriggerSetupHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionTriggerSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupHolder_DEFINED)
#include <Modloader/app/structs/CollisionTriggerSetupHolder__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionTriggerSetupHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionTriggerSetupHolder_DEFINED
struct CollisionTriggerSetupHolder__Class;
struct CollisionTriggerSetupHolder {
    struct CollisionTriggerSetupHolder__Class* klass;
    MonitorData* monitor;
    struct CollisionTriggerSetupHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupHolder_FWDDECL)
#define IL2CPP_STRUCT_CollisionTriggerSetupHolder_FWDDECL
#include <Modloader/app/structs/CollisionTriggerSetupHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionTriggerSetupHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionTriggerSetupHolder_DEFINED) && !defined(IL2CPP_STRUCT_CollisionTriggerSetupHolder_FWDDECL)
#include <Modloader/app/structs/CollisionTriggerSetupHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionTriggerSetupHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

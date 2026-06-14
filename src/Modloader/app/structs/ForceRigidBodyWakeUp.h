#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ForceRigidBodyWakeUp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ForceRigidBodyWakeUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceRigidBodyWakeUp_DEFINED)
#include <Modloader/app/structs/ForceRigidBodyWakeUp__Fields.h>
#if defined(IL2CPP_STRUCT_ForceRigidBodyWakeUp__Fields_DEFINED)
#define IL2CPP_STRUCT_ForceRigidBodyWakeUp_DEFINED
struct ForceRigidBodyWakeUp__Class;
struct ForceRigidBodyWakeUp {
    struct ForceRigidBodyWakeUp__Class* klass;
    MonitorData* monitor;
    struct ForceRigidBodyWakeUp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ForceRigidBodyWakeUp_FWDDECL)
#define IL2CPP_STRUCT_ForceRigidBodyWakeUp_FWDDECL
#include <Modloader/app/structs/ForceRigidBodyWakeUp__Class.h>
#endif
#undef IL2CPP_STRUCT_ForceRigidBodyWakeUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_ForceRigidBodyWakeUp_DEFINED) && !defined(IL2CPP_STRUCT_ForceRigidBodyWakeUp_FWDDECL)
#include <Modloader/app/structs/ForceRigidBodyWakeUp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ForceRigidBodyWakeUp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

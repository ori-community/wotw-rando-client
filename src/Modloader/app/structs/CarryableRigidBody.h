#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CarryableRigidBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CarryableRigidBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableRigidBody_DEFINED)
#include <Modloader/app/structs/CarryableRigidBody__Fields.h>
#if defined(IL2CPP_STRUCT_CarryableRigidBody__Fields_DEFINED)
#define IL2CPP_STRUCT_CarryableRigidBody_DEFINED
struct CarryableRigidBody__Class;
struct CarryableRigidBody {
    struct CarryableRigidBody__Class* klass;
    MonitorData* monitor;
    struct CarryableRigidBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CarryableRigidBody_FWDDECL)
#define IL2CPP_STRUCT_CarryableRigidBody_FWDDECL
#include <Modloader/app/structs/CarryableRigidBody__Class.h>
#endif
#undef IL2CPP_STRUCT_CarryableRigidBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableRigidBody_DEFINED) && !defined(IL2CPP_STRUCT_CarryableRigidBody_FWDDECL)
#include <Modloader/app/structs/CarryableRigidBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CarryableRigidBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

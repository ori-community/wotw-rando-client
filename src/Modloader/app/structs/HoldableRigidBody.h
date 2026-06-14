#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoldableRigidBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoldableRigidBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldableRigidBody_DEFINED)
#include <Modloader/app/structs/HoldableRigidBody__Fields.h>
#if defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_DEFINED)
#define IL2CPP_STRUCT_HoldableRigidBody_DEFINED
struct HoldableRigidBody__Class;
struct HoldableRigidBody {
    struct HoldableRigidBody__Class* klass;
    MonitorData* monitor;
    struct HoldableRigidBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoldableRigidBody_FWDDECL)
#define IL2CPP_STRUCT_HoldableRigidBody_FWDDECL
#include <Modloader/app/structs/HoldableRigidBody__Class.h>
#endif
#undef IL2CPP_STRUCT_HoldableRigidBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldableRigidBody_DEFINED) && !defined(IL2CPP_STRUCT_HoldableRigidBody_FWDDECL)
#include <Modloader/app/structs/HoldableRigidBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoldableRigidBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

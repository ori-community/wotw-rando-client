#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToPhysicsSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToPhysicsSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToPhysicsSystem_DEFINED)
#include <Modloader/app/structs/AttachToPhysicsSystem__Fields.h>
#if defined(IL2CPP_STRUCT_AttachToPhysicsSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachToPhysicsSystem_DEFINED
struct AttachToPhysicsSystem__Class;
struct AttachToPhysicsSystem {
    struct AttachToPhysicsSystem__Class* klass;
    MonitorData* monitor;
    struct AttachToPhysicsSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToPhysicsSystem_FWDDECL)
#define IL2CPP_STRUCT_AttachToPhysicsSystem_FWDDECL
#include <Modloader/app/structs/AttachToPhysicsSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachToPhysicsSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToPhysicsSystem_DEFINED) && !defined(IL2CPP_STRUCT_AttachToPhysicsSystem_FWDDECL)
#include <Modloader/app/structs/AttachToPhysicsSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToPhysicsSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

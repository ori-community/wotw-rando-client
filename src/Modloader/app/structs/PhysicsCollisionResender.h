#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsCollisionResender_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsCollisionResender_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCollisionResender_DEFINED)
#include <Modloader/app/structs/PhysicsCollisionResender__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsCollisionResender__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsCollisionResender_DEFINED
struct PhysicsCollisionResender__Class;
struct PhysicsCollisionResender {
    struct PhysicsCollisionResender__Class* klass;
    MonitorData* monitor;
    struct PhysicsCollisionResender__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsCollisionResender_FWDDECL)
#define IL2CPP_STRUCT_PhysicsCollisionResender_FWDDECL
#include <Modloader/app/structs/PhysicsCollisionResender__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsCollisionResender_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCollisionResender_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsCollisionResender_FWDDECL)
#include <Modloader/app/structs/PhysicsCollisionResender.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsCollisionResender.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

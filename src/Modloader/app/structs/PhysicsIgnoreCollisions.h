#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsIgnoreCollisions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsIgnoreCollisions_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsIgnoreCollisions_DEFINED)
#include <Modloader/app/structs/PhysicsIgnoreCollisions__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsIgnoreCollisions__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsIgnoreCollisions_DEFINED
struct PhysicsIgnoreCollisions__Class;
struct PhysicsIgnoreCollisions {
    struct PhysicsIgnoreCollisions__Class* klass;
    MonitorData* monitor;
    struct PhysicsIgnoreCollisions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsIgnoreCollisions_FWDDECL)
#define IL2CPP_STRUCT_PhysicsIgnoreCollisions_FWDDECL
#include <Modloader/app/structs/PhysicsIgnoreCollisions__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsIgnoreCollisions_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsIgnoreCollisions_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsIgnoreCollisions_FWDDECL)
#include <Modloader/app/structs/PhysicsIgnoreCollisions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsIgnoreCollisions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

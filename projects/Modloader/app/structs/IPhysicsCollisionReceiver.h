#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPhysicsCollisionReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPhysicsCollisionReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsCollisionReceiver_DEFINED)
#define IL2CPP_STRUCT_IPhysicsCollisionReceiver_DEFINED
struct IPhysicsCollisionReceiver__Class;
struct IPhysicsCollisionReceiver {
    struct IPhysicsCollisionReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPhysicsCollisionReceiver_FWDDECL)
#define IL2CPP_STRUCT_IPhysicsCollisionReceiver_FWDDECL
#include <Modloader/app/structs/IPhysicsCollisionReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_IPhysicsCollisionReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsCollisionReceiver_DEFINED) && !defined(IL2CPP_STRUCT_IPhysicsCollisionReceiver_FWDDECL)
#include <Modloader/app/structs/IPhysicsCollisionReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPhysicsCollisionReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

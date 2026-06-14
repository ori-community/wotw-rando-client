#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsScene__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsScene__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene__Boxed_DEFINED)
#include <Modloader/app/structs/PhysicsScene.h>
#if defined(IL2CPP_STRUCT_PhysicsScene_DEFINED)
#define IL2CPP_STRUCT_PhysicsScene__Boxed_DEFINED
struct PhysicsScene__Class;
struct PhysicsScene__Boxed {
    struct PhysicsScene__Class* klass;
    MonitorData* monitor;
    struct PhysicsScene fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsScene__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PhysicsScene__Boxed_FWDDECL
#include <Modloader/app/structs/PhysicsScene__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsScene__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsScene__Boxed_FWDDECL)
#include <Modloader/app/structs/PhysicsScene__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsScene__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

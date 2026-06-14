#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge_DEFINED)
#include <Modloader/app/structs/PhysicsEdge__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEdge_DEFINED
struct PhysicsEdge__Class;
struct PhysicsEdge {
    struct PhysicsEdge__Class* klass;
    MonitorData* monitor;
    struct PhysicsEdge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEdge_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEdge_FWDDECL
#include <Modloader/app/structs/PhysicsEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEdge_FWDDECL)
#include <Modloader/app/structs/PhysicsEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

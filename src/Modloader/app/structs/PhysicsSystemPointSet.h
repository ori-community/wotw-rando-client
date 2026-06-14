#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsSystemPointSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsSystemPointSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet_DEFINED)
#include <Modloader/app/structs/PhysicsSystemPointSet__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsSystemPointSet_DEFINED
struct PhysicsSystemPointSet__Class;
struct PhysicsSystemPointSet {
    struct PhysicsSystemPointSet__Class* klass;
    MonitorData* monitor;
    struct PhysicsSystemPointSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet_FWDDECL)
#define IL2CPP_STRUCT_PhysicsSystemPointSet_FWDDECL
#include <Modloader/app/structs/PhysicsSystemPointSet__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsSystemPointSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsSystemPointSet_FWDDECL)
#include <Modloader/app/structs/PhysicsSystemPointSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsSystemPointSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

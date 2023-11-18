#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_DEFINED)
#include <Modloader/app/structs/LocalSpacePointSet__Fields.h>
#if defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_DEFINED
struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint_;
struct PhysicsSystemPointSet__Fields {
    struct LocalSpacePointSet__Fields _;
    struct List_1_PhysicsSystemPointSet_PhysicsSystemPoint_* m_physicsSystemPoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PhysicsSystemPointSet_PhysicsSystemPoint_.h>
#endif
#undef IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsSystemPointSet__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsSystemPointSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsSystemPointSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

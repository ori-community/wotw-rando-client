#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEdgeMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEdgeMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdgeMetaData_DEFINED)
#include <Modloader/app/structs/PhysicsEdgeMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsEdgeMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEdgeMetaData_DEFINED
struct PhysicsEdgeMetaData__Class;
struct PhysicsEdgeMetaData {
    struct PhysicsEdgeMetaData__Class* klass;
    MonitorData* monitor;
    struct PhysicsEdgeMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEdgeMetaData_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEdgeMetaData_FWDDECL
#include <Modloader/app/structs/PhysicsEdgeMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEdgeMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdgeMetaData_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEdgeMetaData_FWDDECL)
#include <Modloader/app/structs/PhysicsEdgeMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEdgeMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

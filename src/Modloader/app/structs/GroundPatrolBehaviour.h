#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundPatrolBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviour_DEFINED)
#include <Modloader/app/structs/GroundPatrolBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_GroundPatrolBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundPatrolBehaviour_DEFINED
struct GroundPatrolBehaviour__Class;
struct GroundPatrolBehaviour {
    struct GroundPatrolBehaviour__Class* klass;
    MonitorData* monitor;
    struct GroundPatrolBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviour_FWDDECL)
#define IL2CPP_STRUCT_GroundPatrolBehaviour_FWDDECL
#include <Modloader/app/structs/GroundPatrolBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_GroundPatrolBehaviour_FWDDECL)
#include <Modloader/app/structs/GroundPatrolBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundPatrolBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

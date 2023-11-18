#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/VolumePatrolBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_DEFINED
struct RaycastHit__Array;
struct Collider__Array;
struct SkeetoPatrolBehaviour__Fields {
    struct VolumePatrolBehaviourNew__Fields _;
    float DistanceFromKillSurfaces;
    struct RaycastHit__Array* m_hits;
    struct Collider__Array* m_colliders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoPatrolBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoPatrolBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoPatrolBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

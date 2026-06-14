#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAllowedArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAllowedArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmAllowedArea__Fields_DEFINED
struct List_1_UnityEngine_Transform_;
struct Transform;
struct SwarmAllowedArea__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Transform_* m_targets;
    struct Transform* FollowTransformTarget;
    float FollowSpeed;
    int32_t NumberOfAgents;
    float PercentOfAllAgents;
    struct Vector3 m_euler;
    struct Vector3 m_lastPosition;
    float m_initDistanceToFollowTrasform;
    float m_rotateTime;
    bool m_isSpining;
    float m_spinStep;
    float m_spin;
    int32_t m_targetListIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmAllowedArea__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SwarmAllowedArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAllowedArea__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmAllowedArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAllowedArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

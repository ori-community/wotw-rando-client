#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SwarmEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SwarmEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_DEFINED
struct Transform;
struct IEntityLocomotion;
struct ILocomotionTurningHandler;
struct List_1_UnityEngine_Vector3_;
struct SwarmTargetingBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    struct Transform* TargetsParent;
    struct IEntityLocomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_timer;
    float m_targetReachMaxTime;
    struct Vector3 m_targetPos;
    struct List_1_UnityEngine_Vector3_* TargetCandidates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmTargetingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmTargetingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

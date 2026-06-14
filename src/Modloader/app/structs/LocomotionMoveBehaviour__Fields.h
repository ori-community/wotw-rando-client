#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_BehaviourSystem_BehaviourStatus__DEFINED)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_DEFINED
struct LocomotionAnimation__Array;
struct LocomotionAnimation;
struct GroundEntityLocomotion;
struct LocomotionMoveBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float ArrivalDistance;
    float SlowDownDistance;
    struct LocomotionAnimation__Array* MovementAnimations;
    struct LocomotionAnimation* m_currentAnimation;
    struct GroundEntityLocomotion* m_locomotion;
    struct ActiveAnimationHandle m_activeAnimation;
    struct Vector3 m_lastSearchedTargetPosition;
    float m_previusTraversalSpeed;
    bool m_lookDirectionLocked;
    bool m_arrivedAtTarget;
    BehaviourStatus__Enum _Status_k__BackingField;

    struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_DEFINED
struct FloatAnimator;
struct EventTriggerAnimator;
struct TentacleEntity;
struct TentacleTurnBehaviour__Fields {
    struct LocomotionTurningTimelineBehaviour__Fields _;
    struct FloatAnimator* animationForce;
    struct FloatAnimator* positionAlignmentCurve;
    struct EventTriggerAnimator* resetJointsTrigger;
    float targetLerp;
    float headRotationAlignmentToTarget;
    float maxSpeed;
    struct TentacleEntity* m_tentacleEntity;
    bool m_jointsReset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/TentacleEntity.h>
#endif
#undef IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleTurnBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleTurnBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleTurnBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_DEFINED
struct AnimationCurve;
struct FloatAnimationParameter;
struct Transform;
struct MoonAnimator;
struct GasballAirMoveTimelineBehaviour__Fields {
    struct LocomotionAirMoveTimelineBehaviour__Fields _;
    float XRotationSpeed;
    struct AnimationCurve* XRotationAcceleration;
    struct FloatAnimationParameter* LookDirectionAnimParam;
    struct Transform* LookAtRotator;
    float YPositionDifferenceRangeForLookAtRotator;
    float MaxLookAtRotatorAngle;
    float MaxLookAtRotationSpeed;
    struct Transform* m_mirrorTransform;
    struct MoonAnimator* m_animator;
    struct Quaternion m_rightUpRot;
    struct Quaternion m_rightDownRot;
    struct Quaternion m_centerUpRot;
    struct Quaternion m_centerDownRot;
    struct Quaternion m_leftUpRot;
    struct Quaternion m_leftDownRot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballAirMoveTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

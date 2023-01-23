#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_DEFINED
struct Transform;
struct MoonFloat;
struct MoveTowardsFloatTweenable;
struct EulerZRotationTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct Transform* TargetTransform;
    struct MoonFloat* LocalStartEulerAngle;
    struct MoonFloat* LocalEndEulerAngle;
    float Speed;
    HandoverMode__Enum HandoverWrite;

    HandoverMode__Enum HandoverReadStart;

    HandoverMode__Enum HandoverReadEnd;

    float m_currentLocalStartEulerAngles;
    float m_currentLocalEndEulerAngles;
    float m_currentAngle;
    bool m_isFinished;
    struct MoveTowardsFloatTweenable* m_floatTween;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoveTowardsFloatTweenable.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EulerZRotationTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EulerZRotationTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EulerZRotationTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

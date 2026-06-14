#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonVector3;
struct MoonFloat;
struct EulerXYZRotationTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonVector3* LocalStartEulerAngles;
    struct MoonVector3* LocalEndEulerAngles;
    struct MoonFloat* Speed;
    bool ShouldApplyDeltaTimeToSpeed;
    HandoverMode__Enum HandoverWrite;

    HandoverMode__Enum HandoverReadStart;

    HandoverMode__Enum HandoverReadEnd;

    struct Quaternion m_currentLocalStart;
    struct Quaternion m_currentLocalEnd;
    bool m_hasStarted;
    bool m_isFinished;
    float m_duration;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EulerXYZRotationTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EulerXYZRotationTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EulerXYZRotationTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

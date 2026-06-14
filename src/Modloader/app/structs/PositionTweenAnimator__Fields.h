#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PositionTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonVector3;
struct MoonFloat;
struct MoveTowardsVector3Tweenable;
struct PositionTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct MoonVector3* LocalStartPosition;
    struct MoonVector3* LocalEndPosition;
    struct MoonFloat* Speed;
    HandoverMode__Enum HandoverWrite;

    HandoverMode__Enum HandoverReadStart;

    HandoverMode__Enum HandoverReadEnd;

    struct Vector3 m_currentStartPos;
    struct Vector3 m_currentEndPos;
    bool m_hasStarted;
    bool m_isFinished;
    struct MoveTowardsVector3Tweenable* m_tweenPosition;
    struct Vector3 m_lastCurrentPostTweenProvider;
    float m_lastTweenProviderValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/MoveTowardsVector3Tweenable.h>
#endif
#undef IL2CPP_STRUCT_PositionTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PositionTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

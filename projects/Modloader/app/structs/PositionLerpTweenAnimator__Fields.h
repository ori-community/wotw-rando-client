#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_DEFINED
struct Transform;
struct MoonReference_1_ITweenLerpInputProvider_;
struct ITweenLerpInputProvider;
struct LerpVector3Tweenable;
struct PositionLerpTweenAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* TargetTransform;
    struct Vector3 InitialPosition;
    struct Vector3 EndPosition;
    struct MoonReference_1_ITweenLerpInputProvider_* TweenLerpValueProvider;
    struct ITweenLerpInputProvider* m_lerpValue;
    struct LerpVector3Tweenable* m_tweenPosition;
    struct Vector3 m_worldInitialPosition;
    struct Vector3 m_worldEndPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/LerpVector3Tweenable.h>
#include <Modloader/app/structs/MoonReference_1_ITweenLerpInputProvider_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionLerpTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PositionLerpTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionLerpTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

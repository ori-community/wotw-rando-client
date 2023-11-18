#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenZRotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenZRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenZRotation__Fields_DEFINED)
#include <Modloader/app/structs/DrivenZRotation_RefStatus__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED) && defined(IL2CPP_STRUCT_DrivenZRotation_RefStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_DrivenZRotation__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonFloat;
struct MoonReference_1_ITweenLerpInputProvider_;
struct AnimationCurve;
struct ITweenLerpInputProvider;
struct LerpFloatTweenable;
struct Transform;
struct DrivenZRotation__Fields {
    struct MonoBehaviour__Fields _;
    bool Active;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonFloat* InitialRotation;
    struct MoonFloat* EndRotation;
    struct MoonReference_1_ITweenLerpInputProvider_* InputProvider;
    struct AnimationCurve* CurveModifier;
    struct ITweenLerpInputProvider* m_resolvedInputProvider;
    struct LerpFloatTweenable* m_lerpFloatTweenable;
    struct Vector3 m_currentRotation;
    struct Transform* m_resolvedTarget;
    struct Nullable_1_Single_ m_resolvedInitialRotation;
    struct Nullable_1_Single_ m_resolvedEndRotation;
    float m_lastTweenValue;
    bool m_isStaticRotZ;
    float m_lastRotZ;
    DrivenZRotation_RefStatus__Enum m_refStatus;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenZRotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_DrivenZRotation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/LerpFloatTweenable.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_ITweenLerpInputProvider_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DrivenZRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenZRotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DrivenZRotation__Fields_FWDDECL)
#include <Modloader/app/structs/DrivenZRotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenZRotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

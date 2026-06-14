#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Space__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct QuaternionRotationAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    bool EnabledW;
    struct AnimationCurve* RotationX;
    struct AnimationCurve* RotationY;
    struct AnimationCurve* RotationZ;
    struct AnimationCurve* RotationW;
    Space__Enum Space;

    struct Quaternion m_currentLocalStartRotation;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuaternionRotationAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/QuaternionRotationAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuaternionRotationAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

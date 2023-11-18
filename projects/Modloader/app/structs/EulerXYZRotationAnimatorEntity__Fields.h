#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Space__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonQuaternion;
struct AnimationCurve;
struct EulerXYZRotationAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonQuaternion* LocalStartRotation;
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    struct AnimationCurve* RotationX;
    struct AnimationCurve* RotationY;
    struct AnimationCurve* RotationZ;
    Space__Enum Space;

    bool Loop;
    struct Quaternion m_currentLocalStartRotation;
    float m_time;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonQuaternion.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/EulerXYZRotationAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EulerXYZRotationAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_DEFINED
struct MoonReference_1_UnityEngine_Rigidbody_;
struct AnimationCurve;
struct Rigidbody;
struct RigidbodyTranslationAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_Rigidbody_* targetBody;
    struct Vector3 translation;
    struct Vector3 initialPosition;
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    struct AnimationCurve* curveX;
    struct AnimationCurve* curveY;
    struct AnimationCurve* curveZ;
    bool Loop;
    float m_time;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyTranslationAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyTranslationAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/ScaleAnimatorEntity_ScaleMode__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScaleAnimatorEntity_ScaleMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct ScaleAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    ScaleAnimatorEntity_ScaleMode__Enum ClipScaleMode;

    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    struct AnimationCurve* X;
    struct AnimationCurve* Y;
    struct AnimationCurve* Z;
    struct Vector3 m_startingScale;
    float m_time;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaleAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ScaleAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

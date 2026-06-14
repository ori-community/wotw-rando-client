#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct CameraShakeAsset;
struct CameraShakeAnimator__Fields {
    struct TimelineEntity__Fields _;
    float m_externalStrenghtMultiplier;
    float m_externalSpeedMultiplier;
    bool _ProcessShakeInEditor_k__BackingField;
    struct MoonReference_1_UnityEngine_Transform_* ShakeLocation;
    bool ShakeOnlyIfVisibleToCamera;
    bool AffectedByDistance;
    float ShakeObjectSize;
    float ImpactRadius;
    float Strength;
    float Speed;
    float PositionalStrength;
    float RotationalStrength;
    struct CameraShakeAsset* Shake;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeAnimator__Fields_FWDDECL
#include <Modloader/app/structs/CameraShakeAsset.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CameraShakeAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

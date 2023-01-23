#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_DEFINED)
#include <Modloader/app/structs/DamageReceiver__Fields.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_LaserShieldDamageReceiver_FollowingEffect_DEFINED)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_DEFINED
struct LaserShieldCircleSetting;
struct LaserShieldRotationController;
struct DamageTextSpawner;
struct DamageDealer;
struct MoonTimeline;
struct List_1_UnityEngine_MeshRenderer_;
struct List_1_LaserShieldDamageReceiver_FollowingEffect_;
struct LaserShieldDamageReceiver__Fields {
    struct DamageReceiver__Fields _;
    struct LaserShieldCircleSetting* Settings;
    struct LaserShieldRotationController* ShieldController;
    struct DamageTextSpawner* DamageText;
    struct DamageDealer* ContactDamage;
    struct MoonTimeline* HitFlashTimeline;
    float LocalInitialAngle;
    int32_t CircleIndex;
    int32_t PieceModelIndex;
    float m_hp;
    bool m_isDestoyed;
    struct Vector3 m_anchorLocalPosition;
    struct Quaternion m_anchorLocalRotation;
    struct LaserShieldDamageReceiver_FollowingEffect m_heavilyDamagedEffect;
    bool m_initialized;
    struct List_1_UnityEngine_MeshRenderer_* m_meshes;
    struct List_1_LaserShieldDamageReceiver_FollowingEffect_* m_idleEffects;
    struct Vector3 _IndividualHitLocalPositionOffset_k__BackingField;
    struct Vector3 _SharedLocalPositionOffset_k__BackingField;
    struct Vector3 _SharedWorldPositionOffset_k__BackingField;
    int32_t _Index_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/LaserShieldCircleSetting.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/List_1_LaserShieldDamageReceiver_FollowingEffect_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MeshRenderer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShieldDamageReceiver__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShieldDamageReceiver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShieldDamageReceiver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

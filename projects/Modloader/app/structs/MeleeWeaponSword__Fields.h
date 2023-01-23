#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponSword__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponSword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword__Fields_DEFINED)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponSword__Fields_DEFINED
struct GameObject;
struct Renderer;
struct Transform;
struct MoonTimeline;
struct MeleeWeaponColliderStick;
struct MeleeWeaponSword__Fields {
    struct MeleeWeapon__Fields _;
    bool EnableEffects;
    struct GameObject* Sword;
    struct Renderer* SwordRenderer;
    struct Transform* TransformBase;
    struct MoonTimeline* FadeInTimeline;
    struct MoonTimeline* FadeOutTimeline;
    struct MeleeWeaponColliderStick* WeaponCollider;
    float OnBeginComboUpSpeedMultiplierY;
    float RapidAttackSpeedMultiplier;
    struct Vector3 m_initialSwordScale;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponSword__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponSword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponSword__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponSword__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponSword__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

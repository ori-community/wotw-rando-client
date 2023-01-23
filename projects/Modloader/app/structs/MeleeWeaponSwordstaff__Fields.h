#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_DEFINED)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_DEFINED
struct GameObject;
struct Renderer;
struct MeleeWeaponColliderStick;
struct Transform;
struct MoonTimeline;
struct MeleeWeaponSwordstaff__Fields {
    struct MeleeWeapon__Fields _;
    struct GameObject* Swordstaff;
    struct GameObject* Trail;
    struct Renderer* SwordstaffRenderer;
    struct MeleeWeaponColliderStick* WeaponCollider;
    struct Transform* TransformTrailOrigin;
    struct Transform* TransformBase;
    bool EnableEffects;
    float RapidAttackSpeedMultiplier;
    struct MoonTimeline* FadeInTimeline;
    struct MoonTimeline* FadeOutTimeline;
    struct Vector3 m_initialSwordScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponSwordstaff__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponSwordstaff__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponSwordstaff__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

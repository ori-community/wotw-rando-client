#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_DEFINED)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#include <Modloader/app/structs/WeaponJoint__Enum.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED) && defined(IL2CPP_STRUCT_WeaponJoint__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_DEFINED
struct MeleeWeaponColliderStick;
struct MoonAnimator;
struct Transform;
struct MeleeWeaponChainsword__Fields {
    struct MeleeWeapon__Fields _;
    struct MeleeWeaponColliderStick* Sword1Collider;
    struct MeleeWeaponColliderStick* Sword2Collider;
    WeaponJoint__Enum LeftWeaponJoint;

    struct MoonAnimator* LeftAnimator;
    struct Transform* LeftWeaponRoot;
    struct Transform* m_leftTargetJoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_FWDDECL
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponChainsword__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponChainsword__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponChainsword__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

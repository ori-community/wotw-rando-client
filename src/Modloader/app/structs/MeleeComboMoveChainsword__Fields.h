#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_DEFINED
struct MoonTimeline;
struct MeleeWeaponChainsword;
struct MeleeComboMoveChainsword__Fields {
    struct MeleeComboMove__Fields _;
    struct MoonTimeline* AttackTimeline;
    DamageWeight__Enum DamageWeight;

    float Damage;
    bool m_inMove;
    bool m_attackSegmentEnded;
    struct MeleeWeaponChainsword* m_swordWeapon;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_FWDDECL
#include <Modloader/app/structs/MeleeWeaponChainsword.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveChainsword__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveChainsword__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveChainsword__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

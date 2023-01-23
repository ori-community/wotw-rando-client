#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_DEFINED
struct GameObject;
struct UpgradeAbilityItem;
struct SkillUpgradeUIUpgradeDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* IconGO;
    struct GameObject* NameGO;
    struct GameObject* DescriptionGO;
    struct GameObject* StarsGO;
    struct GameObject* PurchasableGO;
    struct GameObject* TooExpensiveGO;
    struct GameObject* OwnedGO;
    struct Color PurchasableColor;
    struct Color NotPurchasableColor;
    struct UpgradeAbilityItem* m_item;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#endif
#undef IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillUpgradeUIUpgradeDetails__Fields_FWDDECL)
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

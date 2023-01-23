#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_DEFINED
struct GameObject;
struct UpgradeAbilityItem;
struct SkillUpgradeShopUISubItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* IconGO;
    struct GameObject* CostGO;
    struct UpgradeAbilityItem* m_upgradeItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/UpgradeAbilityItem.h>
#endif
#undef IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillUpgradeShopUISubItem__Fields_FWDDECL)
#include <Modloader/app/structs/SkillUpgradeShopUISubItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillUpgradeShopUISubItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

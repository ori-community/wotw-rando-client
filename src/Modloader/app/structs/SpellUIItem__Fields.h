#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIItem__Fields_DEFINED
struct GameObject;
struct PlayerUberStateInventory_InventoryItem;
struct SpellUIItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* IconGO;
    struct GameObject* EquippedGOX;
    struct GameObject* EquippedGOY;
    struct GameObject* EquippedGOB;
    struct GameObject* NewGO;
    struct GameObject* EnergyGO;
    struct GameObject* EquippedShared;
    struct GameObject* CenterFacingAnchor;
    struct PlayerUberStateInventory_InventoryItem* m_spell;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#endif
#undef IL2CPP_STRUCT_SpellUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_DEFINED
struct EquipmentUIInventoryItem;
struct CleverMenuItem;
struct SpellUIItem;
struct __declspec(align(8)) EquipmentRadialSelection_ItemCache__Fields {
    struct EquipmentUIInventoryItem* EquipmentUIInventoryItem;
    struct CleverMenuItem* CleverMenuItem;
    struct SpellUIItem* SpellUIItem;
};
#endif
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem.h>
#include <Modloader/app/structs/SpellUIItem.h>
#endif
#undef IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentRadialSelection_ItemCache__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

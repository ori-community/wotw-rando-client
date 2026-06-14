#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapmakerUISubItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapmakerUISubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MapmakerUISubItem__Fields_DEFINED
struct GameObject;
struct MapmakerItem;
struct MapmakerUISubItem__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* IconGO;
    struct GameObject* CostGO;
    struct GameObject* SpiritLightGO;
    struct Color UnpurchaseableColor;
    struct Color PurchasableColor;
    struct MapmakerItem* m_upgradeItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapmakerUISubItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MapmakerItem.h>
#endif
#undef IL2CPP_STRUCT_MapmakerUISubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapmakerUISubItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapmakerUISubItem__Fields_FWDDECL)
#include <Modloader/app/structs/MapmakerUISubItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapmakerUISubItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct Action;
struct PlayerUberStateInventory_InventoryItem;
struct EquipmentWheelUIDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* NameGO;
    struct GameObject* DescriptionGO;
    struct GameObject* UsesEnergyGO;
    struct GameObject* DrainsEnergyGO;
    struct MessageProvider* LockedName;
    struct MessageProvider* LockedDescription;
    float Offset;
    struct Action* OnSocketActivated;
    struct Action* OnSocketAdded;
    struct PlayerUberStateInventory_InventoryItem* m_item;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#endif
#undef IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentWheelUIDetails__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentWheelUIDetails__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentWheelUIDetails__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUISpellDetails__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUISpellDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUISpellDetails__Fields_DEFINED
struct GameObject;
struct EquipmentUIInventoryGrid;
struct Texture2D;
struct MessageProvider;
struct Action;
struct PlayerUberStateInventory_InventoryItem;
struct SpiritShardUIShardSocket;
struct SpellUISpellDetails__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* IconGO;
    struct GameObject* NameGO;
    struct GameObject* DescriptionGO;
    struct GameObject* ShardSocketsCanvasGO;
    struct EquipmentUIInventoryGrid* Grid;
    struct GameObject* SocketItemPrefab;
    struct GameObject* SocketItemHighlightGO;
    struct Texture2D* AddItemIcon;
    struct MessageProvider* AddItemMessage;
    struct Action* OnSocketActivated;
    struct Action* OnSocketAdded;
    struct PlayerUberStateInventory_InventoryItem* m_item;
    struct SpiritShardUIShardSocket* m_addItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUISpellDetails__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SpellUISpellDetails__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUISpellDetails__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUISpellDetails__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUISpellDetails__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

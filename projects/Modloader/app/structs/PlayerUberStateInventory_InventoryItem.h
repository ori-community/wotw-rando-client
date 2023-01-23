#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_DEFINED)
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_DEFINED
struct PlayerUberStateInventory_InventoryItem__Class;
struct PlayerUberStateInventory_InventoryItem {
    struct PlayerUberStateInventory_InventoryItem__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateInventory_InventoryItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_FWDDECL
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

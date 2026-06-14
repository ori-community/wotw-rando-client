#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#if defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_DEFINED
struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_;
struct Action;
struct __declspec(align(8)) PlayerUberStateInventory_InventoryItem__Fields {
    EquipmentType__Enum m_type;

    bool m_isNew;
    bool m_gained;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* Shards;
    struct Action* m_setDirtyCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateInventory_InventoryItem__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

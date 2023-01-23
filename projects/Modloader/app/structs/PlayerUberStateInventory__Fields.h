#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateInventory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateInventory__Fields_DEFINED
struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_;
struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_;
struct Action;
struct __declspec(align(8)) PlayerUberStateInventory__Fields {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* m_inventory;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* m_bindings;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_* m_questItems;
    int32_t m_keystones;
    int32_t m_mapStones;
    int32_t m_experience;
    int32_t m_ore;
    int32_t m_partialHealthContainers;
    int32_t m_partialEnergyContainers;
    bool m_expOrbHasBeenCollectedBefore;
    bool m_keystoneHasBeenCollectedBefore;
    bool m_energyOrbHasBeenCollectedBefore;
    bool m_healthOrbHasBeenCollectedBefore;
    bool m_smallExpOrbHasBeenCollectedBefore;
    bool m_mediumExpOrbHasBeenCollectedBefore;
    bool m_largeExpOrbHasBeenCollectedBefore;
    struct Action* m_setDirtyCallback;
    bool m_inventoryFoldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateInventory__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateInventory__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateInventory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateInventory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

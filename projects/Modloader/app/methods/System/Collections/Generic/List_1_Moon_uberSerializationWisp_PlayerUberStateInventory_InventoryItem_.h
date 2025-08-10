#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr,
        app::PlayerUberStateInventory_InventoryItem* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_,
        GetEnumerator,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::PlayerUberStateInventory_InventoryItem*,
        get_Item,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC80,
        void,
        set_Item,
        app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr,
        int32_t index,
        app::PlayerUberStateInventory_InventoryItem* value
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_

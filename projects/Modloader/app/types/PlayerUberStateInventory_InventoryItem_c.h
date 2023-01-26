#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem_c.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_InventoryItem_c {
        inline app::PlayerUberStateInventory_InventoryItem_c__Class** type_info() {
            static app::PlayerUberStateInventory_InventoryItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateInventory_InventoryItem_c__Class**)(modloader::win::memory::resolve_rva(0x04760580));
            }
            return cache;
        }
        inline app::PlayerUberStateInventory_InventoryItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_InventoryItem_c__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory+InventoryItem", "<>c");
        }
        inline app::PlayerUberStateInventory_InventoryItem_c* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_InventoryItem_c>(get_class());
        }
    } // namespace PlayerUberStateInventory_InventoryItem_c
} // namespace app::classes::types

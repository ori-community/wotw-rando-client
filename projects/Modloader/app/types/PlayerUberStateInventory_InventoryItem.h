#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Array.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_InventoryItem {
        inline app::PlayerUberStateInventory_InventoryItem__Class** type_info() {
            static app::PlayerUberStateInventory_InventoryItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateInventory_InventoryItem__Class**)(modloader::win::memory::resolve_rva(0x0478B640));
            }
            return cache;
        }
        inline app::PlayerUberStateInventory_InventoryItem__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_InventoryItem__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory", "InventoryItem");
        }
        inline app::PlayerUberStateInventory_InventoryItem* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_InventoryItem>(get_class());
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateInventory_InventoryItem__Array>(get_class(), size);
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array* create_array(const std::vector<app::PlayerUberStateInventory_InventoryItem*>& items) {
            return il2cpp::array_new<app::PlayerUberStateInventory_InventoryItem__Array>(get_class(), items);
        }
    } // namespace PlayerUberStateInventory_InventoryItem
} // namespace app::classes::types

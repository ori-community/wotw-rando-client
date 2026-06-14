#pragma once
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Array.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_InventoryItem__Array {
        inline app::PlayerUberStateInventory_InventoryItem__Array__Class** type_info() {
            static app::PlayerUberStateInventory_InventoryItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerUberStateInventory_InventoryItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateInventory_InventoryItem__Array__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateInventory+InventoryItem[]");
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_InventoryItem__Array>(get_class());
        }
    } // namespace PlayerUberStateInventory_InventoryItem__Array
} // namespace app::classes::types

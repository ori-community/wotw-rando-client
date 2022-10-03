#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateInventory_InventoryItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateInventory_InventoryItem__Class** type_info;
        inline app::PlayerUberStateInventory_InventoryItem__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateInventory_InventoryItem__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateInventory", "InventoryItem");
        }
        inline app::PlayerUberStateInventory_InventoryItem* create() {
            return il2cpp::create_object<app::PlayerUberStateInventory_InventoryItem>(get_class());
        }
        inline app::PlayerUberStateInventory_InventoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateInventory_InventoryItem__Array>(get_class(), size);
        }
    } // namespace PlayerUberStateInventory_InventoryItem
} // namespace app::classes::types

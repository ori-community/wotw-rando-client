#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreen2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InventoryScreen2__Class** type_info;
        inline app::InventoryScreen2__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreen2__Class>(type_info, "", "InventoryScreen2");
        }
        inline app::InventoryScreen2* create() {
            return il2cpp::create_object<app::InventoryScreen2>(get_class());
        }
    } // namespace InventoryScreen2
} // namespace app::classes::types

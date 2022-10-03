#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InventoryManager__Class** type_info;
        inline app::InventoryManager__Class* get_class() {
            return il2cpp::get_class<app::InventoryManager__Class>(type_info, "", "InventoryManager");
        }
        inline app::InventoryManager* create() {
            return il2cpp::create_object<app::InventoryManager>(get_class());
        }
    } // namespace InventoryManager
} // namespace app::classes::types

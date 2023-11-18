#pragma once
#include <Modloader/app/structs/InventoryManager.h>
#include <Modloader/app/structs/InventoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryManager {
        inline app::InventoryManager__Class** type_info() {
            static app::InventoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InventoryManager__Class**)(modloader::win::memory::resolve_rva(0x04721EB8));
            }
            return cache;
        }
        inline app::InventoryManager__Class* get_class() {
            return il2cpp::get_class<app::InventoryManager__Class>(type_info(), "", "InventoryManager");
        }
        inline app::InventoryManager* create() {
            return il2cpp::create_object<app::InventoryManager>(get_class());
        }
    } // namespace InventoryManager
} // namespace app::classes::types

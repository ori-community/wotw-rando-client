#pragma once
#include <Modloader/app/structs/InventoryScreen2.h>
#include <Modloader/app/structs/InventoryScreen2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryScreen2 {
        inline app::InventoryScreen2__Class** type_info() {
            static app::InventoryScreen2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InventoryScreen2__Class**)(modloader::win::memory::resolve_rva(0x04729618));
            }
            return cache;
        }
        inline app::InventoryScreen2__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreen2__Class>(type_info(), "", "InventoryScreen2");
        }
        inline app::InventoryScreen2* create() {
            return il2cpp::create_object<app::InventoryScreen2>(get_class());
        }
    } // namespace InventoryScreen2
} // namespace app::classes::types

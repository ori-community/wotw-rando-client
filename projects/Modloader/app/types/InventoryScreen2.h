#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryScreen2 {
        inline app::InventoryScreen2__Class** type_info = (app::InventoryScreen2__Class**)(modloader::win::memory::resolve_rva(0x04729618));
        inline app::InventoryScreen2__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreen2__Class>(type_info, "", "InventoryScreen2");
        }
        inline app::InventoryScreen2* create() {
            return il2cpp::create_object<app::InventoryScreen2>(get_class());
        }
    } // namespace InventoryScreen2
} // namespace app::classes::types

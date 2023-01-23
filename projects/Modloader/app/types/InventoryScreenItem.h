#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InventoryScreenItem__Class.h>
#include <Modloader/app/structs/InventoryScreenItem.h>

namespace app::classes::types {
    namespace InventoryScreenItem {
        namespace {
            inline app::InventoryScreenItem__Class* type_info_ref = nullptr;
        }
        inline app::InventoryScreenItem__Class** type_info = &type_info_ref;
        inline app::InventoryScreenItem__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenItem__Class>(type_info, "", "InventoryScreenItem");
        }
        inline app::InventoryScreenItem* create() {
            return il2cpp::create_object<app::InventoryScreenItem>(get_class());
        }
    } // namespace InventoryScreenItem
} // namespace app::classes::types

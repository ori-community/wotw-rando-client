#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShopkeeperUIItem__Class.h>
#include <Modloader/app/structs/ShopkeeperUIItem.h>

namespace app::classes::types {
    namespace ShopkeeperUIItem {
        namespace {
            inline app::ShopkeeperUIItem__Class* type_info_ref = nullptr;
        }
        inline app::ShopkeeperUIItem__Class** type_info = &type_info_ref;
        inline app::ShopkeeperUIItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUIItem__Class>(type_info, "", "ShopkeeperUIItem");
        }
        inline app::ShopkeeperUIItem* create() {
            return il2cpp::create_object<app::ShopkeeperUIItem>(get_class());
        }
    } // namespace ShopkeeperUIItem
} // namespace app::classes::types

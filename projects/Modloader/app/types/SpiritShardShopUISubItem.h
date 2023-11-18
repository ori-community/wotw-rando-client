#pragma once
#include <Modloader/app/structs/SpiritShardShopUISubItem.h>
#include <Modloader/app/structs/SpiritShardShopUISubItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUISubItem {
        inline app::SpiritShardShopUISubItem__Class** type_info() {
            static app::SpiritShardShopUISubItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardShopUISubItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardShopUISubItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUISubItem__Class>(type_info(), "", "SpiritShardShopUISubItem");
        }
        inline app::SpiritShardShopUISubItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUISubItem>(get_class());
        }
    } // namespace SpiritShardShopUISubItem
} // namespace app::classes::types

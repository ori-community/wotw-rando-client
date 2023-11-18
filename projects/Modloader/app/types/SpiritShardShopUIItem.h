#pragma once
#include <Modloader/app/structs/SpiritShardShopUIItem.h>
#include <Modloader/app/structs/SpiritShardShopUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIItem {
        inline app::SpiritShardShopUIItem__Class** type_info() {
            static app::SpiritShardShopUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardShopUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUIItem__Class>(type_info(), "", "SpiritShardShopUIItem");
        }
        inline app::SpiritShardShopUIItem* create() {
            return il2cpp::create_object<app::SpiritShardShopUIItem>(get_class());
        }
    } // namespace SpiritShardShopUIItem
} // namespace app::classes::types

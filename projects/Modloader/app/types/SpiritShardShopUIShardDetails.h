#pragma once
#include <Modloader/app/structs/SpiritShardShopUIShardDetails.h>
#include <Modloader/app/structs/SpiritShardShopUIShardDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIShardDetails {
        inline app::SpiritShardShopUIShardDetails__Class** type_info() {
            static app::SpiritShardShopUIShardDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardShopUIShardDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardShopUIShardDetails__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUIShardDetails__Class>(type_info(), "", "SpiritShardShopUIShardDetails");
        }
        inline app::SpiritShardShopUIShardDetails* create() {
            return il2cpp::create_object<app::SpiritShardShopUIShardDetails>(get_class());
        }
    } // namespace SpiritShardShopUIShardDetails
} // namespace app::classes::types

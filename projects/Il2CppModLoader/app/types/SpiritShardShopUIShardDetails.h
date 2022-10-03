#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardShopUIShardDetails {
        namespace {
            app::SpiritShardShopUIShardDetails__Class* type_info_ref = nullptr;
        }
        app::SpiritShardShopUIShardDetails__Class** type_info = &type_info_ref;
        inline app::SpiritShardShopUIShardDetails__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardShopUIShardDetails__Class>(type_info, "", "SpiritShardShopUIShardDetails");
        }
        inline app::SpiritShardShopUIShardDetails* create() {
            return il2cpp::create_object<app::SpiritShardShopUIShardDetails>(get_class());
        }
    } // namespace SpiritShardShopUIShardDetails
} // namespace app::classes::types

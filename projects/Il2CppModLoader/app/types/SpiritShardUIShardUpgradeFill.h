#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardUpgradeFill {
        namespace {
            app::SpiritShardUIShardUpgradeFill__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIShardUpgradeFill__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardUpgradeFill__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardUpgradeFill__Class>(type_info, "", "SpiritShardUIShardUpgradeFill");
        }
        inline app::SpiritShardUIShardUpgradeFill* create() {
            return il2cpp::create_object<app::SpiritShardUIShardUpgradeFill>(get_class());
        }
    } // namespace SpiritShardUIShardUpgradeFill
} // namespace app::classes::types

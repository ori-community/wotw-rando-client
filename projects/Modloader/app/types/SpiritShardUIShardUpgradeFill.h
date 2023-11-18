#pragma once
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill.h>
#include <Modloader/app/structs/SpiritShardUIShardUpgradeFill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardUpgradeFill {
        inline app::SpiritShardUIShardUpgradeFill__Class** type_info() {
            static app::SpiritShardUIShardUpgradeFill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIShardUpgradeFill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIShardUpgradeFill__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardUpgradeFill__Class>(type_info(), "", "SpiritShardUIShardUpgradeFill");
        }
        inline app::SpiritShardUIShardUpgradeFill* create() {
            return il2cpp::create_object<app::SpiritShardUIShardUpgradeFill>(get_class());
        }
    } // namespace SpiritShardUIShardUpgradeFill
} // namespace app::classes::types

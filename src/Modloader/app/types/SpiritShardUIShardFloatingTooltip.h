#pragma once
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip.h>
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardFloatingTooltip {
        inline app::SpiritShardUIShardFloatingTooltip__Class** type_info() {
            static app::SpiritShardUIShardFloatingTooltip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIShardFloatingTooltip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIShardFloatingTooltip__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardFloatingTooltip__Class>(type_info(), "", "SpiritShardUIShardFloatingTooltip");
        }
        inline app::SpiritShardUIShardFloatingTooltip* create() {
            return il2cpp::create_object<app::SpiritShardUIShardFloatingTooltip>(get_class());
        }
    } // namespace SpiritShardUIShardFloatingTooltip
} // namespace app::classes::types

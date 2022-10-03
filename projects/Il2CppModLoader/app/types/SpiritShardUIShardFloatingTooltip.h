#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardFloatingTooltip {
        namespace {
            app::SpiritShardUIShardFloatingTooltip__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIShardFloatingTooltip__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIShardFloatingTooltip__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardFloatingTooltip__Class>(type_info, "", "SpiritShardUIShardFloatingTooltip");
        }
        inline app::SpiritShardUIShardFloatingTooltip* create() {
            return il2cpp::create_object<app::SpiritShardUIShardFloatingTooltip>(get_class());
        }
    } // namespace SpiritShardUIShardFloatingTooltip
} // namespace app::classes::types

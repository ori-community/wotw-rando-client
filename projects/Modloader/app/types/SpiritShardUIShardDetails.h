#pragma once
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardDetails {
        inline app::SpiritShardUIShardDetails__Class** type_info() {
            static app::SpiritShardUIShardDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIShardDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIShardDetails__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardDetails__Class>(type_info(), "", "SpiritShardUIShardDetails");
        }
        inline app::SpiritShardUIShardDetails* create() {
            return il2cpp::create_object<app::SpiritShardUIShardDetails>(get_class());
        }
    } // namespace SpiritShardUIShardDetails
} // namespace app::classes::types

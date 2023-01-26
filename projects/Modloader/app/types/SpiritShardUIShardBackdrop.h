#pragma once
#include <Modloader/app/structs/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/structs/SpiritShardUIShardBackdrop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIShardBackdrop {
        inline app::SpiritShardUIShardBackdrop__Class** type_info() {
            static app::SpiritShardUIShardBackdrop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIShardBackdrop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIShardBackdrop__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIShardBackdrop__Class>(type_info(), "", "SpiritShardUIShardBackdrop");
        }
        inline app::SpiritShardUIShardBackdrop* create() {
            return il2cpp::create_object<app::SpiritShardUIShardBackdrop>(get_class());
        }
    } // namespace SpiritShardUIShardBackdrop
} // namespace app::classes::types

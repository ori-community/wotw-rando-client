#pragma once
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIItem {
        inline app::SpiritShardUIItem__Class** type_info() {
            static app::SpiritShardUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIItem__Class>(type_info(), "", "SpiritShardUIItem");
        }
        inline app::SpiritShardUIItem* create() {
            return il2cpp::create_object<app::SpiritShardUIItem>(get_class());
        }
    } // namespace SpiritShardUIItem
} // namespace app::classes::types

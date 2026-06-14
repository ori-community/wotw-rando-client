#pragma once
#include <Modloader/app/structs/SpiritShardUIStarRow.h>
#include <Modloader/app/structs/SpiritShardUIStarRow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIStarRow {
        inline app::SpiritShardUIStarRow__Class** type_info() {
            static app::SpiritShardUIStarRow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardUIStarRow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardUIStarRow__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIStarRow__Class>(type_info(), "", "SpiritShardUIStarRow");
        }
        inline app::SpiritShardUIStarRow* create() {
            return il2cpp::create_object<app::SpiritShardUIStarRow>(get_class());
        }
    } // namespace SpiritShardUIStarRow
} // namespace app::classes::types

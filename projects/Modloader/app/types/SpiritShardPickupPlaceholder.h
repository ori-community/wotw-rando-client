#pragma once
#include <Modloader/app/structs/SpiritShardPickupPlaceholder.h>
#include <Modloader/app/structs/SpiritShardPickupPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardPickupPlaceholder {
        inline app::SpiritShardPickupPlaceholder__Class** type_info() {
            static app::SpiritShardPickupPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardPickupPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardPickupPlaceholder__Class>(type_info(), "", "SpiritShardPickupPlaceholder");
        }
        inline app::SpiritShardPickupPlaceholder* create() {
            return il2cpp::create_object<app::SpiritShardPickupPlaceholder>(get_class());
        }
    } // namespace SpiritShardPickupPlaceholder
} // namespace app::classes::types

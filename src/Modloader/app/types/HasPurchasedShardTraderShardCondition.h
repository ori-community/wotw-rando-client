#pragma once
#include <Modloader/app/structs/HasPurchasedShardTraderShardCondition.h>
#include <Modloader/app/structs/HasPurchasedShardTraderShardCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedShardTraderShardCondition {
        inline app::HasPurchasedShardTraderShardCondition__Class** type_info() {
            static app::HasPurchasedShardTraderShardCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasPurchasedShardTraderShardCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasPurchasedShardTraderShardCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedShardTraderShardCondition__Class>(type_info(), "", "HasPurchasedShardTraderShardCondition");
        }
        inline app::HasPurchasedShardTraderShardCondition* create() {
            return il2cpp::create_object<app::HasPurchasedShardTraderShardCondition>(get_class());
        }
    } // namespace HasPurchasedShardTraderShardCondition
} // namespace app::classes::types

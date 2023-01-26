#pragma once
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Array.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder_ConditionalStockList__Array {
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array__Class** type_info() {
            static app::ShardTraderPlaceholder_ConditionalStockList__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardTraderPlaceholder_ConditionalStockList__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderPlaceholder_ConditionalStockList__Array__Class>(type_info(), "", "ShardTraderPlaceholder+ConditionalStockList[]");
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array* create() {
            return il2cpp::create_object<app::ShardTraderPlaceholder_ConditionalStockList__Array>(get_class());
        }
    } // namespace ShardTraderPlaceholder_ConditionalStockList__Array
} // namespace app::classes::types

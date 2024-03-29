#pragma once
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Array.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Boxed.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder_ConditionalStockList {
        inline app::ShardTraderPlaceholder_ConditionalStockList__Class** type_info() {
            static app::ShardTraderPlaceholder_ConditionalStockList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShardTraderPlaceholder_ConditionalStockList__Class**)(modloader::win::memory::resolve_rva(0x0477D7A8));
            }
            return cache;
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Class* get_class() {
            return il2cpp::get_nested_class<app::ShardTraderPlaceholder_ConditionalStockList__Class>(type_info(), "", "ShardTraderPlaceholder", "ConditionalStockList");
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList* create() {
            return il2cpp::create_object<app::ShardTraderPlaceholder_ConditionalStockList>(get_class());
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Boxed* box(app::ShardTraderPlaceholder_ConditionalStockList value) {
            return il2cpp::box_value<app::ShardTraderPlaceholder_ConditionalStockList__Boxed>(get_class(), value);
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array* create_array(int size) {
            return il2cpp::array_new<app::ShardTraderPlaceholder_ConditionalStockList__Array>(get_class(), size);
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array* create_array(const std::vector<app::ShardTraderPlaceholder_ConditionalStockList>& items) {
            return il2cpp::array_new<app::ShardTraderPlaceholder_ConditionalStockList__Array>(get_class(), items);
        }
    } // namespace ShardTraderPlaceholder_ConditionalStockList
} // namespace app::classes::types

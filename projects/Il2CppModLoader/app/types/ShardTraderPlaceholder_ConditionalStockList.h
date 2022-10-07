#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder_ConditionalStockList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShardTraderPlaceholder_ConditionalStockList__Class** type_info;
        inline app::ShardTraderPlaceholder_ConditionalStockList__Class* get_class() {
            return il2cpp::get_nested_class<app::ShardTraderPlaceholder_ConditionalStockList__Class>(type_info, "", "ShardTraderPlaceholder", "ConditionalStockList");
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

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderPlaceholder_ConditionalStockList__Array {
        namespace {
            app::ShardTraderPlaceholder_ConditionalStockList__Array__Class* type_info_ref = nullptr;
        }
        app::ShardTraderPlaceholder_ConditionalStockList__Array__Class** type_info = &type_info_ref;
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderPlaceholder_ConditionalStockList__Array__Class>(type_info, "", "ShardTraderPlaceholder+ConditionalStockList[]");
        }
        inline app::ShardTraderPlaceholder_ConditionalStockList__Array* create() {
            return il2cpp::create_object<app::ShardTraderPlaceholder_ConditionalStockList__Array>(get_class());
        }
    } // namespace ShardTraderPlaceholder_ConditionalStockList__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/Comparison_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ShardTraderPlaceholder_ConditionalStockList_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_ShardTraderPlaceholder_ConditionalStockList_* this_ptr,
        app::Comparison_1_ShardTraderPlaceholder_ConditionalStockList_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_ShardTraderPlaceholder_ConditionalStockList_* this_ptr,
        app::ShardTraderPlaceholder_ConditionalStockList x,
        app::ShardTraderPlaceholder_ConditionalStockList y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ShardTraderPlaceholder_ConditionalStockList_

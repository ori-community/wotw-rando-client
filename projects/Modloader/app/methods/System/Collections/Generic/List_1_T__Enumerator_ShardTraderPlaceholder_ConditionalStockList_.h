#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_ShardTraderPlaceholder_ConditionalStockList_ {
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::ShardTraderPlaceholder_ConditionalStockList,
        get_Current,
        app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014CA30, bool, MoveNext, app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014CA00,
        void,
        ctor,
        app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr,
        app::List_1_ShardTraderPlaceholder_ConditionalStockList_* list
    )
    IL2CPP_REGISTER_METHOD(0x0014CAF0, bool, MoveNextRare, app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0014CB40,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014CC00, void, IEnumerator_Reset, app::List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_ShardTraderPlaceholder_ConditionalStockList_

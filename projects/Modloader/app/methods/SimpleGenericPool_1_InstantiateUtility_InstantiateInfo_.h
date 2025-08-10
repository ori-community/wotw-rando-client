#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>

namespace app::classes::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x01D17960,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        GetInstance,
        app::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01D177E0, void, ctor, app::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x01D17C00,
        void,
        Destroy,
        app::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ pool_item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D17D00,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        AddNewToPool,
        app::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01D17E30,
        void,
        TakeFromPool,
        app::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_* item,
        int32_t index
    )
} // namespace app::classes::SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_

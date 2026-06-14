#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleGenericPool_1_System_Object_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>

namespace app::classes::SimpleGenericPool_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D17E40, void, ctor, app::SimpleGenericPool_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x01D17FB0, app::SimpleGenericPool_1_T_PoolItem_System_Object_, GetInstance, app::SimpleGenericPool_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D181A0,
        void,
        Destroy,
        app::SimpleGenericPool_1_System_Object_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ pool_item
    )
    IL2CPP_REGISTER_METHOD(0x01D18270, app::SimpleGenericPool_1_T_PoolItem_System_Object_, AddNewToPool, app::SimpleGenericPool_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D18320,
        void,
        TakeFromPool,
        app::SimpleGenericPool_1_System_Object_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_* item,
        int32_t index
    )
} // namespace app::classes::SimpleGenericPool_1_System_Object_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object___Boxed.h>

namespace app::classes::SimpleGenericPool_1_T__PoolItem_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x001C99F0, void, Free, app::SimpleGenericPool_1_T_PoolItem_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001C9A10,
        void,
        SetInstantiationSettings,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Boxed* this_ptr,
        bool optional,
        int32_t max_life
    )
} // namespace app::classes::SimpleGenericPool_1_T__PoolItem_System_Object_

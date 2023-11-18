#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>

namespace app::classes::System::Comparison_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::Comparison_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B8B6D0, int32_t, Invoke_1, (app::Comparison_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ x, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ y))
    IL2CPP_REGISTER_METHOD(0x02C7BEC0, app::IAsyncResult*, BeginInvoke_1, (app::Comparison_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ x, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke_1, (app::Comparison_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::Comparison_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B86EB0, int32_t, Invoke_2, (app::Comparison_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ x, app::SimpleGenericPool_1_T_PoolItem_System_Object_ y))
    IL2CPP_REGISTER_METHOD(0x02C7BFB0, app::IAsyncResult*, BeginInvoke_2, (app::Comparison_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ x, app::SimpleGenericPool_1_T_PoolItem_System_Object_ y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke_2, (app::Comparison_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_SimpleGenericPool_1_PoolItem_

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Predicate_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Predicate_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>

namespace app::classes::System::Predicate_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::Predicate_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028911E0, bool, Invoke_1, (app::Predicate_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ obj))
    IL2CPP_REGISTER_METHOD(0x02A500C0, app::IAsyncResult*, BeginInvoke_1, (app::Predicate_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_1, (app::Predicate_1_SimpleGenericPool_1_PoolItem_ * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::Predicate_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288D9D0, bool, Invoke_2, (app::Predicate_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ obj))
    IL2CPP_REGISTER_METHOD(0x02A50190, app::IAsyncResult*, BeginInvoke_2, (app::Predicate_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::SimpleGenericPool_1_T_PoolItem_System_Object_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_2, (app::Predicate_1_SimpleGenericPool_1_PoolItem__1 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_SimpleGenericPool_1_PoolItem_

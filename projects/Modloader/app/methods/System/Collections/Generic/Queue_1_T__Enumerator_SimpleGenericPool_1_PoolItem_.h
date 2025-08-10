#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(
        0x001EDDD0,
        void,
        ctor,
        app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr,
        app::Queue_1_SimpleGenericPool_1_PoolItem_* q
    )
    IL2CPP_REGISTER_METHOD(0x001EDE20, void, Dispose, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDE50, bool, MoveNext, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001EDE60,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        get_Current,
        app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001EDEC0, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDED0, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDFA0, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_SimpleGenericPool_1_PoolItem___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_SimpleGenericPool_1_PoolItem_

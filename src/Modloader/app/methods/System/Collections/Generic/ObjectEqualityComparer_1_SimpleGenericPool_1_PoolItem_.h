#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object___Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(
        0x02659150,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ x,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02659220,
        int32_t,
        IndexOf_1,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x026593D0,
        int32_t,
        LastIndexOf_1,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor_1, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CD2410,
        bool,
        Equals_3,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ x,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_3,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD24D0,
        int32_t,
        IndexOf_2,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD2660,
        int32_t,
        LastIndexOf_2,
        app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_4, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_4, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor_2, app::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SimpleGenericPool_1_PoolItem_

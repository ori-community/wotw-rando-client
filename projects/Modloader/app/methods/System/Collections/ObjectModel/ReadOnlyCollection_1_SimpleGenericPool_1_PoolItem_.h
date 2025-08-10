#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IEnumerator_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IList_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IList_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object___Array.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::IList_1_SimpleGenericPool_1_PoolItem_* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02E3E960,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        get_Item_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02E3EA00,
        bool,
        Contains_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_SimpleGenericPool_1_PoolItem_*,
        GetEnumerator_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E3EA80,
        int32_t,
        IndexOf_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02E3E960,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        System_Collections_Generic_IList_T__get_Item_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x02EBF890, app::IEnumerator*, IEnumerable_GetEnumerator_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EBF920, app::Object*, ICollection_get_SyncRoot_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EBFAB0,
        void,
        ICollection_CopyTo_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E3F1D0, app::Object*, IList_get_Item_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E3F2B0, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02E3F3D0, bool, IList_Contains_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02E3F4D0, int32_t, IList_IndexOf_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_1,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_1, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::IList_1_SimpleGenericPool_1_PoolItem__1* list
    )
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B7DD70,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_,
        get_Item_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DE50,
        bool,
        Contains_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DEC0,
        void,
        CopyTo_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF30,
        app::IEnumerator_1_SimpleGenericPool_1_PoolItem__1*,
        GetEnumerator_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DF90,
        int32_t,
        IndexOf_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_T__get_IsReadOnly_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DD70,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_,
        System_Collections_Generic_IList_T__get_Item_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Add_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_T__Clear_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_T__Remove_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__RemoveAt_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x02EBFEF0, app::IEnumerator*, IEnumerable_GetEnumerator_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EBFF80, app::Object*, ICollection_get_SyncRoot_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EC0110,
        void,
        ICollection_CopyTo_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7E6C0, app::Object*, IList_get_Item_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_set_Item_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7E7D0, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E8D0, bool, IList_Contains_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E9B0, int32_t, IList_IndexOf_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IList_Insert_2,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt_2, app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_

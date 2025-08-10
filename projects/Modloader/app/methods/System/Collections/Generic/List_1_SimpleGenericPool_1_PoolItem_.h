#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Action_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Comparison_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IComparer_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IComparer_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IEnumerable_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IEnumerable_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/IEnumerator_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/List_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/List_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/Predicate_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object___Array.h>

namespace app::classes::System::Collections::Generic::List_1_SimpleGenericPool_1_PoolItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02D88670,
        void,
        ctor_3,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem_* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D88B10, app::Object*, ICollection_get_SyncRoot_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D842B0,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        get_Item_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84300,
        void,
        set_Item_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ value
    )
    IL2CPP_REGISTER_METHOD(0x02D84380, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02D844A0, app::Object*, IList_get_Item_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02D88C70, void, IList_set_Item_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02D846E0,
        void,
        Add_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D88E20, int32_t, IList_Add_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem_*,
        AsReadOnly_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84970,
        int32_t,
        BinarySearch_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        int32_t count,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84A20,
        int32_t,
        BinarySearch_2,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02D84AD0,
        bool,
        Contains_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D84C00, bool, IList_Contains_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array
    )
    IL2CPP_REGISTER_METHOD(0x02D88FF0, void, ICollection_CopyTo_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84E60,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_,
        Find_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D84FF0,
        app::List_1_SimpleGenericPool_1_PoolItem_*,
        FindAll_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D85270,
        int32_t,
        FindIndex_2,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D890E0,
        void,
        ForEach_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Action_1_SimpleGenericPool_1_PoolItem_* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02D85580,
        app::List_1_T_Enumerator_SimpleGenericPool_1_PoolItem_,
        GetEnumerator_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D855F0,
        app::IEnumerator_1_SimpleGenericPool_1_PoolItem_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02D855F0, app::IEnumerator*, IEnumerable_GetEnumerator_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_SimpleGenericPool_1_PoolItem_*,
        GetRange_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D856D0,
        int32_t,
        IndexOf_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D85730, int32_t, IList_IndexOf_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D858A0,
        void,
        Insert_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D892B0, void, IList_Insert_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D89460,
        void,
        InsertRange_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02D85EC0,
        bool,
        Remove_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D85F60, void, IList_Remove_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D860C0,
        int32_t,
        RemoveAll_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem_* match
    )
    IL2CPP_REGISTER_METHOD(0x02D86340, void, RemoveAt_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_2,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_SimpleGenericPool_1_PoolItem_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_4,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr,
        app::Comparison_1_SimpleGenericPool_1_PoolItem_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo___Array*,
        ToArray_1,
        app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_1, app::List_1_SimpleGenericPool_1_PoolItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_1, )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_4, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_5, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02D897D0,
        void,
        ctor_6,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem__1* collection
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D89C60, app::Object*, ICollection_get_SyncRoot_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C1DFB0,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_,
        get_Item_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1DFF0,
        void,
        set_Item_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(0x02C1E050, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02C1E150, app::Object*, IList_get_Item_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02D89DC0, void, IList_set_Item_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02C1E360,
        void,
        Add_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D89F50, int32_t, IList_Add_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem__1* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9050,
        app::ReadOnlyCollection_1_SimpleGenericPool_1_PoolItem__1*,
        AsReadOnly_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1E5B0,
        int32_t,
        BinarySearch_3,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        int32_t count,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1E650,
        int32_t,
        BinarySearch_4,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C1E6F0,
        bool,
        Contains_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x02C1E7E0, bool, IList_Contains_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x025E9490,
        void,
        CopyTo_4,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array
    )
    IL2CPP_REGISTER_METHOD(
        0x02D8A100,
        void,
        ICollection_CopyTo_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_5,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_6,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1EA20,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_,
        Find_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1EB60,
        app::List_1_SimpleGenericPool_1_PoolItem__1*,
        FindAll_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9A20,
        int32_t,
        FindIndex_3,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1EDA0,
        int32_t,
        FindIndex_4,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(
        0x02D8A1F0,
        void,
        ForEach_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Action_1_SimpleGenericPool_1_PoolItem__1* action
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1F070,
        app::List_1_T_Enumerator_SimpleGenericPool_1_PoolItem__1,
        GetEnumerator_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1F0C0,
        app::IEnumerator_1_SimpleGenericPool_1_PoolItem__1*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02C1F0C0, app::IEnumerator*, IEnumerable_GetEnumerator_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_SimpleGenericPool_1_PoolItem__1*,
        GetRange_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1F170,
        int32_t,
        IndexOf_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x02C1F1C0, int32_t, IList_IndexOf_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02C1F310,
        void,
        Insert_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x02D8A3A0, void, IList_Insert_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02D8A540,
        void,
        InsertRange_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        app::IEnumerable_1_SimpleGenericPool_1_PoolItem__1* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02C1F8F0,
        bool,
        Remove_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::SimpleGenericPool_1_T_PoolItem_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x02C1F980, void, IList_Remove_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02C1FAD0,
        int32_t,
        RemoveAll_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Predicate_1_SimpleGenericPool_1_PoolItem__1* match
    )
    IL2CPP_REGISTER_METHOD(0x02C1FD10, void, RemoveAt_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_3, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_4, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_5, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort_6,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_7,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_SimpleGenericPool_1_PoolItem__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort_8,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr,
        app::Comparison_1_SimpleGenericPool_1_PoolItem__1* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::SimpleGenericPool_1_T_PoolItem_System_Object___Array*,
        ToArray_2,
        app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_2, app::List_1_SimpleGenericPool_1_PoolItem__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_2, )
} // namespace app::classes::System::Collections::Generic::List_1_SimpleGenericPool_1_PoolItem_

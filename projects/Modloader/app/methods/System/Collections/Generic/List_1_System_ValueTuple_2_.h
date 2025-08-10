#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Action_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Action_1_ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/IComparer_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__4.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__5.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__6.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__7.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__8.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__9.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__3.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__4.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_2__5.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2__3.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2__4.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_ValueTuple_2__5.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Predicate_1_ValueTuple_2_Int32_String_.h>
#include <Modloader/app/structs/Predicate_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Predicate_1_ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/ValueTuple_2_Action_UberPoolItem_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_String_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object___Array.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single___Array.h>
#include <Modloader/app/structs/ValueTuple_2_String_Single_.h>

namespace app::classes::System::Collections::Generic::List_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_1, app::List_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_1, app::List_1_System_ValueTuple_2_* this_ptr, app::ValueTuple_2_Action_UberPoolItem_ item)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2_, GetEnumerator_1, app::List_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_1, app::List_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::ValueTuple_2_Action_UberPoolItem_, get_Item_1, app::List_1_System_ValueTuple_2_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_System_ValueTuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_System_ValueTuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_2, app::List_1_System_ValueTuple_2__2* this_ptr, app::ValueTuple_2_Int32_String_ item)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_1, app::List_1_System_ValueTuple_2__2* this_ptr, app::Predicate_1_ValueTuple_2_Int32_String_* match)
    IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt_1, app::List_1_System_ValueTuple_2__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_2, app::List_1_System_ValueTuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::ValueTuple_2_Int32_String_, get_Item_2, app::List_1_System_ValueTuple_2__2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_3, app::List_1_System_ValueTuple_2__1* this_ptr, app::ValueTuple_2_String_Single_ item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_3, app::List_1_System_ValueTuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2__1, GetEnumerator_2, app::List_1_System_ValueTuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_2, app::List_1_System_ValueTuple_2__1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2__2, GetEnumerator_3, app::List_1_System_ValueTuple_2__2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_4, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_5, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1F1D0, void, ctor_6, app::List_1_System_ValueTuple_2__3* this_ptr, app::IEnumerable_1_System_ValueTuple_2__4* collection)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_3, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1F650, app::Object*, ICollection_get_SyncRoot_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::ValueTuple_2_Int32_Object_, get_Item_3, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, app::ValueTuple_2_Int32_Object_ value)
    IL2CPP_REGISTER_METHOD(0x025E8AF0, bool, IsCompatibleObject_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8BE0, app::Object*, IList_get_Item_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1F7B0, void, IList_set_Item_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_4, app::List_1_System_ValueTuple_2__3* this_ptr, app::ValueTuple_2_Int32_Object_ item)
    IL2CPP_REGISTER_METHOD(0x02F1F940, int32_t, IList_Add_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::IEnumerable_1_System_ValueTuple_2__4* collection)
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_System_ValueTuple_2_*, AsReadOnly_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9160,
        int32_t,
        BinarySearch_1,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t index,
        int32_t count,
        app::ValueTuple_2_Int32_Object_ item,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025E91F0,
        int32_t,
        BinarySearch_2,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Int32_Object_ item,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_3, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::ValueTuple_2_Int32_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::ValueTuple_2_Int32_Object___Array* array)
    IL2CPP_REGISTER_METHOD(0x02F1FAE0, void, ICollection_CopyTo_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_2,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t index,
        app::ValueTuple_2_Int32_Object___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_3,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        app::ValueTuple_2_Int32_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Predicate_1_ValueTuple_2_Int32_Object_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E96E0,
        app::ValueTuple_2_Int32_Object_,
        Find_1,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        app::Predicate_1_ValueTuple_2_Int32_Object_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9800,
        app::List_1_System_ValueTuple_2__3*,
        FindAll_1,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        app::Predicate_1_ValueTuple_2_Int32_Object_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_2, app::List_1_System_ValueTuple_2__3* this_ptr, app::Predicate_1_ValueTuple_2_Int32_Object_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E9A50,
        int32_t,
        FindIndex_3,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_ValueTuple_2_Int32_Object_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1FBD0, void, ForEach_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Action_1_ValueTuple_2_Int32_Object_* action)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2__3, GetEnumerator_4, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9D60,
        app::IEnumerator_1_System_ValueTuple_2__7*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_1,
        app::List_1_System_ValueTuple_2__3* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E9D60, app::IEnumerator*, IEnumerable_GetEnumerator_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_System_ValueTuple_2__3*,
        GetRange_1,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::ValueTuple_2_Int32_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, app::ValueTuple_2_Int32_Object_ item)
    IL2CPP_REGISTER_METHOD(0x02F1FD80, void, IList_Insert_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02F1FF10,
        void,
        InsertRange_1,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t index,
        app::IEnumerable_1_System_ValueTuple_2__4* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::ValueTuple_2_Int32_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll_1, app::List_1_System_ValueTuple_2__3* this_ptr, app::Predicate_1_ValueTuple_2_Int32_Object_* match)
    IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt_2, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_1, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_2, app::List_1_System_ValueTuple_2__3* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_2, app::List_1_System_ValueTuple_2__3* this_ptr, app::IComparer_1_System_ValueTuple_2_* comparer)
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_3,
        app::List_1_System_ValueTuple_2__3* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_System_ValueTuple_2_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_4, app::List_1_System_ValueTuple_2__3* this_ptr, app::Comparison_1_ValueTuple_2_Int32_Object_* comparison)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::ValueTuple_2_Int32_Object___Array*, ToArray_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_1, app::List_1_System_ValueTuple_2__3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_1, )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_7, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_8, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F202D0, void, ctor_9, app::List_1_System_ValueTuple_2__4* this_ptr, app::IEnumerable_1_System_ValueTuple_2__5* collection)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_4, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F20750, app::Object*, ICollection_get_SyncRoot_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::ValueTuple_2_Object_Object_, get_Item_4, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, app::ValueTuple_2_Object_Object_ value)
    IL2CPP_REGISTER_METHOD(0x025E8AF0, bool, IsCompatibleObject_2, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8BE0, app::Object*, IList_get_Item_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F208B0, void, IList_set_Item_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_5, app::List_1_System_ValueTuple_2__4* this_ptr, app::ValueTuple_2_Object_Object_ item)
    IL2CPP_REGISTER_METHOD(0x02F20A40, int32_t, IList_Add_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::IEnumerable_1_System_ValueTuple_2__5* collection)
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_System_ValueTuple_2__1*, AsReadOnly_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9160,
        int32_t,
        BinarySearch_3,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t index,
        int32_t count,
        app::ValueTuple_2_Object_Object_ item,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025E91F0,
        int32_t,
        BinarySearch_4,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        app::ValueTuple_2_Object_Object_ item,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_4, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::ValueTuple_2_Object_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_4, app::List_1_System_ValueTuple_2__4* this_ptr, app::ValueTuple_2_Object_Object___Array* array)
    IL2CPP_REGISTER_METHOD(0x02F20BE0, void, ICollection_CopyTo_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_5,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t index,
        app::ValueTuple_2_Object_Object___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_6,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        app::ValueTuple_2_Object_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Predicate_1_ValueTuple_2_Object_Object_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E96E0,
        app::ValueTuple_2_Object_Object_,
        Find_2,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        app::Predicate_1_ValueTuple_2_Object_Object_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9800,
        app::List_1_System_ValueTuple_2__4*,
        FindAll_2,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        app::Predicate_1_ValueTuple_2_Object_Object_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_4, app::List_1_System_ValueTuple_2__4* this_ptr, app::Predicate_1_ValueTuple_2_Object_Object_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E9A50,
        int32_t,
        FindIndex_5,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_ValueTuple_2_Object_Object_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F20CD0, void, ForEach_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Action_1_ValueTuple_2_Object_Object_* action)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2__4, GetEnumerator_5, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9D60,
        app::IEnumerator_1_System_ValueTuple_2__8*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_2,
        app::List_1_System_ValueTuple_2__4* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E9D60, app::IEnumerator*, IEnumerable_GetEnumerator_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_System_ValueTuple_2__4*,
        GetRange_2,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::ValueTuple_2_Object_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, app::ValueTuple_2_Object_Object_ item)
    IL2CPP_REGISTER_METHOD(0x02F20E80, void, IList_Insert_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02F21010,
        void,
        InsertRange_2,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t index,
        app::IEnumerable_1_System_ValueTuple_2__5* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::ValueTuple_2_Object_Object_ item)
    IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll_2, app::List_1_System_ValueTuple_2__4* this_ptr, app::Predicate_1_ValueTuple_2_Object_Object_* match)
    IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt_3, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_2, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_3, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_4, app::List_1_System_ValueTuple_2__4* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_5, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_6, app::List_1_System_ValueTuple_2__4* this_ptr, app::IComparer_1_System_ValueTuple_2__1* comparer)
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_7,
        app::List_1_System_ValueTuple_2__4* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_System_ValueTuple_2__1* comparer
    )
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_8, app::List_1_System_ValueTuple_2__4* this_ptr, app::Comparison_1_ValueTuple_2_Object_Object_* comparison)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::ValueTuple_2_Object_Object___Array*, ToArray_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_2, app::List_1_System_ValueTuple_2__4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_2, )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_10, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_11, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F213D0, void, ctor_12, app::List_1_System_ValueTuple_2__5* this_ptr, app::IEnumerable_1_System_ValueTuple_2__6* collection)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count_5, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F21850, app::Object*, ICollection_get_SyncRoot_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8A60, app::ValueTuple_2_Object_Single_, get_Item_5, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8A90, void, set_Item_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, app::ValueTuple_2_Object_Single_ value)
    IL2CPP_REGISTER_METHOD(0x025E8AF0, bool, IsCompatibleObject_3, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8BE0, app::Object*, IList_get_Item_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F219B0, void, IList_set_Item_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x025E8DE0, void, Add_6, app::List_1_System_ValueTuple_2__5* this_ptr, app::ValueTuple_2_Object_Single_ item)
    IL2CPP_REGISTER_METHOD(0x02F21B40, int32_t, IList_Add_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::IEnumerable_1_System_ValueTuple_2__6* collection)
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_System_ValueTuple_2__2*, AsReadOnly_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9160,
        int32_t,
        BinarySearch_5,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t index,
        int32_t count,
        app::ValueTuple_2_Object_Single_ item,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025E91F0,
        int32_t,
        BinarySearch_6,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        app::ValueTuple_2_Object_Single_ item,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear_5, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9280, bool, Contains_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::ValueTuple_2_Object_Single_ item)
    IL2CPP_REGISTER_METHOD(0x025E9350, bool, IList_Contains_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025E9490, void, CopyTo_7, app::List_1_System_ValueTuple_2__5* this_ptr, app::ValueTuple_2_Object_Single___Array* array)
    IL2CPP_REGISTER_METHOD(0x02F21CE0, void, ICollection_CopyTo_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(
        0x025E95B0,
        void,
        CopyTo_8,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t index,
        app::ValueTuple_2_Object_Single___Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x025E95F0,
        void,
        CopyTo_9,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        app::ValueTuple_2_Object_Single___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x025E9620, void, EnsureCapacity_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x025E96A0, bool, Exists_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Predicate_1_ValueTuple_2_Object_Single_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E96E0,
        app::ValueTuple_2_Object_Single_,
        Find_3,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        app::Predicate_1_ValueTuple_2_Object_Single_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9800,
        app::List_1_System_ValueTuple_2__5*,
        FindAll_3,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        app::Predicate_1_ValueTuple_2_Object_Single_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex_6, app::List_1_System_ValueTuple_2__5* this_ptr, app::Predicate_1_ValueTuple_2_Object_Single_* match)
    IL2CPP_REGISTER_METHOD(
        0x025E9A50,
        int32_t,
        FindIndex_7,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t start_index,
        int32_t count,
        app::Predicate_1_ValueTuple_2_Object_Single_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F21DD0, void, ForEach_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Action_1_ValueTuple_2_Object_Single_* action)
    IL2CPP_REGISTER_METHOD(0x025E9D20, app::List_1_T_Enumerator_System_ValueTuple_2__5, GetEnumerator_6, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9D60,
        app::IEnumerator_1_System_ValueTuple_2__9*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator_3,
        app::List_1_System_ValueTuple_2__5* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E9D60, app::IEnumerator*, IEnumerable_GetEnumerator_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_System_ValueTuple_2__5*,
        GetRange_3,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x025E9FA0, int32_t, IndexOf_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::ValueTuple_2_Object_Single_ item)
    IL2CPP_REGISTER_METHOD(0x025E9FE0, int32_t, IList_IndexOf_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA130, void, Insert_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, app::ValueTuple_2_Object_Single_ item)
    IL2CPP_REGISTER_METHOD(0x02F21F80, void, IList_Insert_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, app::Object* item)
    IL2CPP_REGISTER_METHOD(
        0x02F22110,
        void,
        InsertRange_3,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t index,
        app::IEnumerable_1_System_ValueTuple_2__6* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EA760, bool, Remove_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::ValueTuple_2_Object_Single_ item)
    IL2CPP_REGISTER_METHOD(0x025EA7E0, void, IList_Remove_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x025EA920, int32_t, RemoveAll_3, app::List_1_System_ValueTuple_2__5* this_ptr, app::Predicate_1_ValueTuple_2_Object_Single_* match)
    IL2CPP_REGISTER_METHOD(0x025EAB40, void, RemoveAt_4, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange_3, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse_5, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse_6, app::List_1_System_ValueTuple_2__5* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EAD50, void, Sort_9, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort_10, app::List_1_System_ValueTuple_2__5* this_ptr, app::IComparer_1_System_ValueTuple_2__2* comparer)
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort_11,
        app::List_1_System_ValueTuple_2__5* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_System_ValueTuple_2__2* comparer
    )
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort_12, app::List_1_System_ValueTuple_2__5* this_ptr, app::Comparison_1_ValueTuple_2_Object_Single_* comparison)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::ValueTuple_2_Object_Single___Array*, ToArray_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAF70, void, TrimExcess_3, app::List_1_System_ValueTuple_2__5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAFD0, void, cctor_3, )
} // namespace app::classes::System::Collections::Generic::List_1_System_ValueTuple_2_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int64__1.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_System_Int64_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__KeyList_System_Int64_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x019D6B90,
        void,
        ctor,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr,
        app::SortedList_2_System_Int64_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAA810, app::Object*, ICollection_get_SyncRoot, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAA8A0, void, Add, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CAA900, void, Clear, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD0810, bool, Contains, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(
        0x02CAA260,
        void,
        CopyTo,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr,
        app::Int64__Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAA960,
        void,
        ICollection_CopyTo,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x02CAAAE0, void, Insert, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int32_t index, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02CAA4B0, int64_t, get_Item, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02CAAB40,
        void,
        set_Item,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr,
        int32_t index,
        int64_t value
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAA540,
        app::IEnumerator_1_System_Int64__1*,
        GetEnumerator,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAA540,
        app::IEnumerator*,
        IEnumerable_GetEnumerator,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CAABA0, int32_t, IndexOf, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CAACA0, bool, Remove, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CAAD00, void, RemoveAt, app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::SortedList_2_TKey_TValue__KeyList_System_Int64_System_Object_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Int64_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IComparer_1_System_Int64_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int64_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int64_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int64_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int64_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_System_Int64_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_Int64_System_Object_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_System_Int64_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02CAE5F0, void, ctor_1, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAE670, void, ctor_2, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::IComparer_1_System_Int64_* comparer)
    IL2CPP_REGISTER_METHOD(0x02CB0BA0, void, Add, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02CB0D00,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::SortedList_2_System_Int64_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Int64_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB0D30,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::SortedList_2_System_Int64_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Int64_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB0E00,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::SortedList_2_System_Int64_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Int64_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x02CB0EF0, void, set_Capacity, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IComparer_1_System_Int64_*, get_Comparer, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB10E0, void, IDictionary_Add, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D0DC00,
        app::ICollection_1_System_Int64_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01D0DC00, app::ICollection*, IDictionary_get_Keys, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D0DC00,
        app::IEnumerable_1_System_Int64_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CAEF10, app::IList_1_System_Object_*, get_Values, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CAEF10,
        app::ICollection_1_System_Object_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CAEF10, app::ICollection*, IDictionary_get_Values, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CAEF10,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAEF40,
        app::SortedList_2_TKey_TValue_KeyList_System_Int64_System_Object_*,
        GetKeyListHelper,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CAF070,
        app::SortedList_2_TKey_TValue_ValueList_System_Int64_System_Object_*,
        GetValueListHelper,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB13F0, app::Object*, ICollection_get_SyncRoot, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CAF300, void, Clear, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB1550, bool, IDictionary_Contains, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02CAF400, bool, ContainsKey, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CAF430, bool, ContainsValue, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02CB1620,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::SortedList_2_System_Int64_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Int64_System_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x02CB1890, void, ICollection_CopyTo, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CAFC10, void, EnsureCapacity, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t min)
    IL2CPP_REGISTER_METHOD(0x02CB1DB0, app::Object*, GetByIndex, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02CB1EC0,
        app::IEnumerator_1_KeyValuePair_2_System_Int64_System_Object_*,
        GetEnumerator,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CB1EC0,
        app::IEnumerator_1_KeyValuePair_2_System_Int64_System_Object_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::SortedList_2_System_Int64_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CB1F70, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB1EC0, app::IEnumerator*, IEnumerable_GetEnumerator, app::SortedList_2_System_Int64_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CB2020, int64_t, GetKey, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CB2130, app::Object*, get_Item, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CB2240, void, set_Item, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CB2360, app::Object*, IDictionary_get_Item, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02CB2460,
        void,
        IDictionary_set_Item,
        app::SortedList_2_System_Int64_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02CB26B0, int32_t, IndexOfKey, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CB0620, int32_t, IndexOfValue, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CB2770, void, Insert, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t index, int64_t key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02CB0780, bool, TryGetValue, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key, app::Object** value)
    IL2CPP_REGISTER_METHOD(0x02CB28A0, void, RemoveAt, app::SortedList_2_System_Int64_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02CB0970, bool, Remove, app::SortedList_2_System_Int64_System_Object_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(0x02CB2A10, void, IDictionary_Remove, app::SortedList_2_System_Int64_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02CB2AD0, bool, IsCompatibleKey, app::Object* key)
} // namespace app::classes::System::Collections::Generic::SortedList_2_System_Int64_System_Object_

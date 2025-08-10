#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/Dictionary_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_ByteEnum_.h>
#include <Modloader/app/structs/ICollection_1_System_Int64Enum_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ByteEnum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int64Enum_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_ByteEnum_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Int64Enum__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_System_Int64Enum_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_ByteEnum_System_Int64Enum___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_ByteEnum_System_Int64Enum_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor_3,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::IEqualityComparer_1_System_ByteEnum_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6750,
        void,
        ctor_4,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        int32_t capacity,
        app::IEqualityComparer_1_System_ByteEnum_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_5,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::IDictionary_2_System_ByteEnum_System_Int64Enum_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6890,
        void,
        ctor_6,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::IDictionary_2_System_ByteEnum_System_Int64Enum_* dictionary,
        app::IEqualityComparer_1_System_ByteEnum_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6C50,
        void,
        ctor_7,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_ByteEnum_*, get_Comparer, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_ByteEnum_System_Int64Enum_*,
        get_Keys,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::ICollection_1_System_ByteEnum_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::IEnumerable_1_System_ByteEnum_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_ByteEnum_System_Int64Enum_*,
        get_Values,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::ICollection_1_System_Int64Enum_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::IEnumerable_1_System_Int64Enum_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02EA6D20, app::Int64Enum__Enum, get_Item, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::ByteEnum__Enum key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::ByteEnum__Enum key,
        app::Int64Enum__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::ByteEnum__Enum key,
        app::Int64Enum__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6E30,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::KeyValuePair_2_System_ByteEnum_System_Int64Enum_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6E60,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::KeyValuePair_2_System_ByteEnum_System_Int64Enum_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA6F40,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::KeyValuePair_2_System_ByteEnum_System_Int64Enum_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::ByteEnum__Enum key)
    IL2CPP_REGISTER_METHOD(0x02EA7040, bool, ContainsValue, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::Int64Enum__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x02EA7110,
        void,
        CopyTo,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::KeyValuePair_2_System_ByteEnum_System_Int64Enum___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int64Enum_,
        GetEnumerator,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5450,
        app::IEnumerator_1_KeyValuePair_2_System_ByteEnum_System_Int64Enum_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA7350,
        void,
        GetObjectData,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x02EA7590, int32_t, FindEntry, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::ByteEnum__Enum key)
    IL2CPP_REGISTER_METHOD(0x02EA77C0, void, Initialize, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02EA7920,
        bool,
        TryInsert,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::ByteEnum__Enum key,
        app::Int64Enum__Enum value,
        app::InsertionBehavior__Enum behavior
    )
    IL2CPP_REGISTER_METHOD(0x02EA7FF0, void, OnDeserialization, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(0x02EA8400, void, Resize_1, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EA84D0,
        void,
        Resize_2,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        int32_t new_size,
        bool force_new_hash_codes
    )
    IL2CPP_REGISTER_METHOD(0x02EA87A0, bool, Remove, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::ByteEnum__Enum key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::ByteEnum__Enum key,
        app::Int64Enum__Enum* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAE050,
        bool,
        TryAdd,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::ByteEnum__Enum key,
        app::Int64Enum__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D900,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::KeyValuePair_2_System_ByteEnum_System_Int64Enum___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02EA8BA0,
        void,
        ICollection_CopyTo,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x02BA5450, app::IEnumerator*, IEnumerable_GetEnumerator, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EA9190, app::Object*, ICollection_get_SyncRoot, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EA92F0, app::Object*, IDictionary_get_Item, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02EA9430,
        void,
        IDictionary_set_Item,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02EA9720, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02EA9820,
        void,
        IDictionary_Add,
        app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02E35BB0, bool, IDictionary_Contains, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02BA7EA0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E35C80, void, IDictionary_Remove, app::Dictionary_2_System_ByteEnum_System_Int64Enum_* this_ptr, app::Object* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_ByteEnum_System_Int64Enum_

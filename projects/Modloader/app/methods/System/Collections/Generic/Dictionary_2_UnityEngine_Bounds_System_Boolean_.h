#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Boolean_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/IEqualityComparer_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Bounds_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB7050, bool, ContainsKey, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key))
    IL2CPP_REGISTER_METHOD(0x02CB6BF0, bool, get_Item, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key))
    IL2CPP_REGISTER_METHOD(0x02CB6D20, void, set_Item, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key, bool value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::IEqualityComparer_1_UnityEngine_Bounds_* comparer))
    IL2CPP_REGISTER_METHOD(0x02CB65F0, void, ctor_4, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_UnityEngine_Bounds_* comparer))
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::IDictionary_2_UnityEngine_Bounds_System_Boolean_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02CB6730, void, ctor_6, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::IDictionary_2_UnityEngine_Bounds_System_Boolean_* dictionary, app::IEqualityComparer_1_UnityEngine_Bounds_* comparer))
    IL2CPP_REGISTER_METHOD(0x02CB6B20, void, ctor_7, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_UnityEngine_Bounds_*, get_Comparer, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Bounds_System_Boolean_*, get_Keys, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_UnityEngine_Bounds_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_UnityEngine_Bounds_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Bounds_System_Boolean_*, get_Values, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_System_Boolean_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_System_Boolean_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB6D70, void, Add, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key, bool value))
    IL2CPP_REGISTER_METHOD(0x02CB6DC0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02CB6E10, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02CB6F10, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02CB70A0, bool, ContainsValue, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02CB7180, void, CopyTo, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CB73E0, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Bounds_System_Boolean_, GetEnumerator, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB7440, app::IEnumerator_1_KeyValuePair_2_UnityEngine_Bounds_System_Boolean_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB7500, void, GetObjectData, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02CB7740, int32_t, FindEntry, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key))
    IL2CPP_REGISTER_METHOD(0x02CB79A0, void, Initialize, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02CB7B00, bool, TryInsert, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key, bool value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHOD(0x02CB8240, void, OnDeserialization, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x02CB8660, void, Resize_1, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB8730, void, Resize_2, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02CB8A00, bool, Remove, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key))
    IL2CPP_REGISTER_METHOD(0x02CB8E40, bool, TryGetValue, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key, bool* value))
    IL2CPP_REGISTER_METHOD(0x02CB8EE0, bool, TryAdd, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Bounds key, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::KeyValuePair_2_UnityEngine_Bounds_System_Boolean___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CB8F30, void, ICollection_CopyTo, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CB7440, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB9520, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB9680, app::Object*, IDictionary_get_Item, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02CB97E0, void, IDictionary_set_Item, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CB9AE0, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02CB9BE0, void, IDictionary_Add, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CB9EE0, bool, IDictionary_Contains, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02CB9FD0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CBA090, void, IDictionary_Remove, (app::Dictionary_2_UnityEngine_Bounds_System_Boolean_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Bounds_System_Boolean_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_UnityEngine_Vector3___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02E1EE00, void, ctor_4, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Vector3_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02E1EF40, void, ctor_6, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::IDictionary_2_System_Object_UnityEngine_Vector3_* dictionary, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02E1F330, void, ctor_7, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_*, get_Comparer, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_UnityEngine_Vector3_*, get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_UnityEngine_Vector3_*, get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_UnityEngine_Vector3_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_UnityEngine_Vector3_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1F400, app::Vector3, get_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02BA4D50, void, set_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02BA4DA0, void, Add, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02E1F530, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector3_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02E1F580, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector3_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02E1F690, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector3_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02E1F7D0, bool, ContainsValue, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02E1F8D0, void, CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector3___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0283BD60, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_UnityEngine_Vector3_, GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator_1_KeyValuePair_2_System_Object_UnityEngine_Vector3_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E1FB30, void, GetObjectData, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02E1FD70, int32_t, FindEntry, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02E1FFE0, void, Initialize, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02E20140, bool, TryInsert, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Vector3 value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHOD(0x02E20800, void, OnDeserialization, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x02E20C50, void, Resize_1, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E20D20, void, Resize_2, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02E20FF0, bool, Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02E21420, bool, TryGetValue, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x02BA6DE0, bool, TryAdd, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::KeyValuePair_2_System_Object_UnityEngine_Vector3___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02E214C0, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0283BDB0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E21A50, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E21BB0, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02E21D00, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02E22000, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02E22100, void, IDictionary_Add, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x0283E8F0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_UnityEngine_Vector3_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_UnityEngine_Vector3_

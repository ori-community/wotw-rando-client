#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PoolTransformPosition.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IDictionary_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/ICollection_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/ICollection_1_PoolTransformPosition_.h>
#include <Modloader/app/structs/IEnumerable_1_PoolTransformPosition_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_PoolTransformPosition___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_PoolTransformPosition_ {
    IL2CPP_REGISTER_METHOD(0x02BA8640, app::PoolTransformPosition, get_Item, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x047429D8, Dictionary_2_System_Int32_PoolTransformPosition__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x047610C0, Dictionary_2_System_Int32_PoolTransformPosition__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA87E0, void, Add, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key, app::PoolTransformPosition value))
    IL2CPP_REGISTER_METHODINFO(0x047647C8, Dictionary_2_System_Int32_PoolTransformPosition__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723810, Dictionary_2_System_Int32_PoolTransformPosition___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02BA8010, void, ctor_4, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047223D8, Dictionary_2_System_Int32_PoolTransformPosition___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::IDictionary_2_System_Int32_PoolTransformPosition_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02BA8150, void, ctor_6, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::IDictionary_2_System_Int32_PoolTransformPosition_* dictionary, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477D1B8, Dictionary_2_System_Int32_PoolTransformPosition___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA8570, void, ctor_7, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32_*, get_Comparer, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PoolTransformPosition_*, get_Keys, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PoolTransformPosition_*, get_Values, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_PoolTransformPosition_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_PoolTransformPosition_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA8780, void, set_Item, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key, app::PoolTransformPosition value))
    IL2CPP_REGISTER_METHOD(0x02BA8840, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::KeyValuePair_2_System_Int32_PoolTransformPosition_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BA8890, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::KeyValuePair_2_System_Int32_PoolTransformPosition_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02BA89D0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::KeyValuePair_2_System_Int32_PoolTransformPosition_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA8B30, bool, ContainsValue, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::PoolTransformPosition value))
    IL2CPP_REGISTER_METHOD(0x02BA8C60, void, CopyTo, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::KeyValuePair_2_System_Int32_PoolTransformPosition___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04743700, Dictionary_2_System_Int32_PoolTransformPosition__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA8ED0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_PoolTransformPosition_, GetEnumerator, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA8F40, app::IEnumerator_1_KeyValuePair_2_System_Int32_PoolTransformPosition_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA9020, void, GetObjectData, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04718E50, Dictionary_2_System_Int32_PoolTransformPosition__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA9260, int32_t, FindEntry, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04768958, Dictionary_2_System_Int32_PoolTransformPosition__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA9480, void, Initialize, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02BA95E0, bool, TryInsert, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key, app::PoolTransformPosition value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0473F3B8, Dictionary_2_System_Int32_PoolTransformPosition__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA9CD0, void, OnDeserialization, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04725098, Dictionary_2_System_Int32_PoolTransformPosition__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAA0F0, void, Resize_1, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAA1C0, void, Resize_2, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02BAA480, bool, Remove, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0470D918, Dictionary_2_System_Int32_PoolTransformPosition__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAA880, bool, TryGetValue, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key, app::PoolTransformPosition* value))
    IL2CPP_REGISTER_METHOD(0x02BAA930, bool, TryAdd, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, int32_t key, app::PoolTransformPosition value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::KeyValuePair_2_System_Int32_PoolTransformPosition___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02BAA990, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04766190, Dictionary_2_System_Int32_PoolTransformPosition__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA8F40, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAAFA0, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAB100, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02BAB260, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04725BF8, Dictionary_2_System_Int32_PoolTransformPosition__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAB570, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0473F058, Dictionary_2_System_Int32_PoolTransformPosition__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAB670, void, IDictionary_Add, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04793998, Dictionary_2_System_Int32_PoolTransformPosition__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02BAB980, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32_PoolTransformPosition_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_PoolTransformPosition_

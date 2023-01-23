#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IDictionary_2_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/ICollection_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_UnityEngine_Color___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32Enum_UnityEngine_Color_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32Enum_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C3AD70, void, ctor_4, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0472CF00, Dictionary_2_System_Int32Enum_UnityEngine_Color___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::IDictionary_2_System_Int32Enum_UnityEngine_Color_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02C3AEB0, void, ctor_6, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::IDictionary_2_System_Int32Enum_UnityEngine_Color_* dictionary, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470FCC8, Dictionary_2_System_Int32Enum_UnityEngine_Color___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3B290, void, ctor_7, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32Enum_*, get_Comparer, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_UnityEngine_Color_*, get_Keys, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32Enum_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32Enum_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_UnityEngine_Color_*, get_Values, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_UnityEngine_Color_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_UnityEngine_Color_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3B360, app::Color, get_Item, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0473DC28, Dictionary_2_System_Int32Enum_UnityEngine_Color__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC57C0, void, set_Item, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02C3B480, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_UnityEngine_Color_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02C3B4C0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_UnityEngine_Color_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02C3B5C0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_UnityEngine_Color_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHOD(0x02C3B6E0, bool, ContainsValue, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x02C3B7D0, void, CopyTo, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_UnityEngine_Color___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473A220, Dictionary_2_System_Int32Enum_UnityEngine_Color__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3BA00, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_UnityEngine_Color_, GetEnumerator, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3BA50, app::IEnumerator_1_KeyValuePair_2_System_Int32Enum_UnityEngine_Color_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3BB00, void, GetObjectData, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047439B0, Dictionary_2_System_Int32Enum_UnityEngine_Color__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3BD40, int32_t, FindEntry, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04785CF8, Dictionary_2_System_Int32Enum_UnityEngine_Color__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3BF60, void, Initialize, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02C3C0C0, bool, TryInsert, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key, app::Color value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x04723A08, Dictionary_2_System_Int32Enum_UnityEngine_Color__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3C780, void, OnDeserialization, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04703798, Dictionary_2_System_Int32Enum_UnityEngine_Color__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3CB90, void, Resize_1, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3CC60, void, Resize_2, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02C3CF20, bool, Remove, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04761D98, Dictionary_2_System_Int32Enum_UnityEngine_Color__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3D310, bool, TryGetValue, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key, app::Color* value))
    IL2CPP_REGISTER_METHOD(0x02BC7730, bool, TryAdd, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Int32Enum__Enum key, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_UnityEngine_Color___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02C3D3A0, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04733FE0, Dictionary_2_System_Int32Enum_UnityEngine_Color__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3BA50, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3D980, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C3DAE0, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02C3DC20, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04744BF0, Dictionary_2_System_Int32Enum_UnityEngine_Color__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3DF20, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04768A08, Dictionary_2_System_Int32Enum_UnityEngine_Color__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C3E020, void, IDictionary_Add, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0478AAF8, Dictionary_2_System_Int32Enum_UnityEngine_Color__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02C3E320, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32Enum_UnityEngine_Color_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32Enum_UnityEngine_Color_

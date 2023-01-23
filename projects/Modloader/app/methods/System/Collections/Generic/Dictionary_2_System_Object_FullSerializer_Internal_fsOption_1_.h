#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/ICollection_1_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/IEnumerable_1_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/fsOption_1_fsVersionedType_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02DCC260, void, ctor_4, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04744D30, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::IDictionary_2_System_Object_FullSerializer_Internal_fsOption_1_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02DCC3A0, void, ctor_6, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::IDictionary_2_System_Object_FullSerializer_Internal_fsOption_1_* dictionary, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0474C9C8, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCC7C0, void, ctor_7, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_*, get_Comparer, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_FullSerializer_Internal_fsOption_1_*, get_Keys, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_FullSerializer_Internal_fsOption_1_*, get_Values, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_FullSerializer_Internal_fsOption_1_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_FullSerializer_Internal_fsOption_1_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCC890, app::fsOption_1_fsVersionedType_, get_Item, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x047060D8, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCC9C0, void, set_Item, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::fsOption_1_fsVersionedType_ value))
    IL2CPP_REGISTER_METHOD(0x02DCCA10, void, Add, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::fsOption_1_fsVersionedType_ value))
    IL2CPP_REGISTER_METHOD(0x02DCCA60, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DCCAB0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DCCBD0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DCCD10, bool, ContainsValue, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::fsOption_1_fsVersionedType_ value))
    IL2CPP_REGISTER_METHOD(0x02DCCE20, void, CopyTo, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478DD30, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CB3A80, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_FullSerializer_Internal_fsOption_1_, GetEnumerator, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CB3AE0, app::IEnumerator_1_KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCD0B0, void, GetObjectData, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04714DA0, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCD2F0, int32_t, FindEntry, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04722BB0, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCD560, void, Initialize, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02DCD6C0, bool, TryInsert, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::fsOption_1_fsVersionedType_ value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0474C0A8, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCDD60, void, OnDeserialization, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x0474C178, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCE1B0, void, Resize_1, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCE280, void, Resize_2, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02DCE560, bool, Remove, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04719DB0, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCE920, bool, TryGetValue, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::fsOption_1_fsVersionedType_* value))
    IL2CPP_REGISTER_METHOD(0x02DCE9D0, bool, TryAdd, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::fsOption_1_fsVersionedType_ value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::KeyValuePair_2_System_Object_FullSerializer_Internal_fsOption_1___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02DCEA20, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04778BE0, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CB3AE0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCEFC0, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DCF120, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DCF270, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04760BA0, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCF570, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0475BD30, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DCF670, void, IDictionary_Add, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04732B30, Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02CB6520, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_FullSerializer_Internal_fsOption_1_

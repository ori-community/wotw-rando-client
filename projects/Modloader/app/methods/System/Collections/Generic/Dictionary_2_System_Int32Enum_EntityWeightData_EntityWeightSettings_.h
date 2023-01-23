#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IDictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/ICollection_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/ICollection_1_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/IEnumerable_1_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHOD(0x02DB1A00, void, ctor_4, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04759918, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::IDictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02DB1B40, void, ctor_6, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::IDictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_* dictionary, app::IEqualityComparer_1_System_Int32Enum_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476E5B8, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB2050, void, ctor_7, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32Enum_*, get_Comparer, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_EntityWeightData_EntityWeightSettings_*, get_Keys, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32Enum_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32Enum_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32Enum_EntityWeightData_EntityWeightSettings_*, get_Values, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_EntityWeightData_EntityWeightSettings_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_EntityWeightData_EntityWeightSettings_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB2120, app::EntityWeightData_EntityWeightSettings, get_Item, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04744788, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB22B0, void, set_Item, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key, app::EntityWeightData_EntityWeightSettings value))
    IL2CPP_REGISTER_METHOD(0x02DB2350, void, Add, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key, app::EntityWeightData_EntityWeightSettings value))
    IL2CPP_REGISTER_METHOD(0x02DB23F0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DB2480, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DB2660, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHOD(0x02DB2860, bool, ContainsValue, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::EntityWeightData_EntityWeightSettings value))
    IL2CPP_REGISTER_METHOD(0x02DB2A30, void, CopyTo, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04767438, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB2D20, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_EntityWeightData_EntityWeightSettings_, GetEnumerator, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB2D90, app::IEnumerator_1_KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB2EB0, void, GetObjectData, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04769FD0, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB30F0, int32_t, FindEntry, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0478A1C8, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB3310, void, Initialize, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02DB3470, bool, TryInsert, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key, app::EntityWeightData_EntityWeightSettings value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x04704688, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB3C10, void, OnDeserialization, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x0476DED8, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB40A0, void, Resize_1, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB4170, void, Resize_2, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02DB4440, bool, Remove, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0472C080, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB4840, bool, TryGetValue, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key, app::EntityWeightData_EntityWeightSettings* value))
    IL2CPP_REGISTER_METHOD(0x02DB4960, bool, TryAdd, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Int32Enum__Enum key, app::EntityWeightData_EntityWeightSettings value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::KeyValuePair_2_System_Int32Enum_EntityWeightData_EntityWeightSettings___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02DB4A00, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04704C80, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB2D90, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB5100, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB5260, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DB5420, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04712970, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB5780, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04750010, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB5880, void, IDictionary_Add, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0470ABD8, Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DB5BE0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32Enum_EntityWeightData_EntityWeightSettings_

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/ICollection_1_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x02DD5930, void, ctor_4, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04712650, Dictionary_2_System_Object_Moon_Rendering_SrpSampler___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::IDictionary_2_System_Object_Moon_Rendering_SrpSampler_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02DD5A70, void, ctor_6, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::IDictionary_2_System_Object_Moon_Rendering_SrpSampler_* dictionary, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0473A0E8, Dictionary_2_System_Object_Moon_Rendering_SrpSampler___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD5E80, void, ctor_7, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Object_*, get_Comparer, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Object_Moon_Rendering_SrpSampler_*, get_Keys, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Object_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Object_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Object_Moon_Rendering_SrpSampler_*, get_Values, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_Moon_Rendering_SrpSampler_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_Moon_Rendering_SrpSampler_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DD5F50, app::SrpSampler, get_Item, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x04736598, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA8780, void, set_Item, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::SrpSampler value))
    IL2CPP_REGISTER_METHOD(0x02BA87E0, void, Add, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::SrpSampler value))
    IL2CPP_REGISTER_METHOD(0x02DD6090, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DD60E0, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DD6220, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DA8270, bool, ContainsValue, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::SrpSampler value))
    IL2CPP_REGISTER_METHOD(0x02DD6380, void, CopyTo, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474A1D0, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DA8610, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_Moon_Rendering_SrpSampler_, GetEnumerator, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DA8680, app::IEnumerator_1_KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DD65F0, void, GetObjectData, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474AD30, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD6830, int32_t, FindEntry, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x0476BC08, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD6AA0, void, Initialize, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02DD6C00, bool, TryInsert, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::SrpSampler value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x0476B0A0, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD72D0, void, OnDeserialization, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04755078, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD7730, void, Resize_1, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DD7800, void, Resize_2, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02DD7AC0, bool, Remove, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHODINFO(0x0470C490, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DA9FC0, bool, TryGetValue, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::SrpSampler* value))
    IL2CPP_REGISTER_METHOD(0x02BAA930, bool, TryAdd, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::SrpSampler value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::KeyValuePair_2_System_Object_Moon_Rendering_SrpSampler___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02DD7F00, void, ICollection_CopyTo, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473F538, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DA8680, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DD84B0, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DD8610, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DD8770, void, IDictionary_set_Item, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04734168, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD8A80, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x0472C4E0, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DD8B80, void, IDictionary_Add, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04791E28, Dictionary_2_System_Object_Moon_Rendering_SrpSampler__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC1F30, bool, IDictionary_Contains, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02DAB050, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BC2000, void, IDictionary_Remove, (app::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_Moon_Rendering_SrpSampler_

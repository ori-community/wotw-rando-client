#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/IDictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/ICollection_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/ICollection_1_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ {
    IL2CPP_REGISTER_METHOD(0x02DB8340, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::ActivateAnimatorSystem_ObjectState* value))
    IL2CPP_REGISTER_METHODINFO(0x04727F40, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02DB6430, void, set_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::ActivateAnimatorSystem_ObjectState value))
    IL2CPP_REGISTER_METHODINFO(0x04719A90, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB7BC0, bool, Remove, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04732320, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB63E0, app::ActivateAnimatorSystem_ObjectState, get_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0473EAD8, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711810, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor_3, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHOD(0x02EB5DE0, void, ctor_4, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t capacity, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04707778, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283ADC0, void, ctor_5, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::IDictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_* dictionary))
    IL2CPP_REGISTER_METHOD(0x02EB5F20, void, ctor_6, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::IDictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_* dictionary, app::IEqualityComparer_1_System_Int32_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047462B8, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB6310, void, ctor_7, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IEqualityComparer_1_System_Int32_*, get_Comparer, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_*, get_Keys, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::ICollection_1_System_Int32_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::IEnumerable_1_System_Int32_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_*, get_Values, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::ICollection_1_Moon_Timeline_ActivateAnimatorSystem_ObjectState_*, System_Collections_Generic_IDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::IEnumerable_1_Moon_Timeline_ActivateAnimatorSystem_ObjectState_*, System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB6480, void, Add, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::ActivateAnimatorSystem_ObjectState value))
    IL2CPP_REGISTER_METHOD(0x02DB64D0, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DB6520, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x02DB6640, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ key_value_pair))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02DB6780, bool, ContainsValue, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::ActivateAnimatorSystem_ObjectState value))
    IL2CPP_REGISTER_METHOD(0x02EB6510, void, CopyTo, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473BC48, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283F7F0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_, GetEnumerator, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283F850, app::IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_*, System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EB6770, void, GetObjectData, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04731938, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB69B0, int32_t, FindEntry, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0477C858, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__FindEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB6BD0, void, Initialize, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02EB6D30, bool, TryInsert, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::ActivateAnimatorSystem_ObjectState value, app::InsertionBehavior__Enum behavior))
    IL2CPP_REGISTER_METHODINFO(0x047226C0, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__TryInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB7410, void, OnDeserialization, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04720230, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB7830, void, Resize_1, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EB7900, void, Resize_2, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t new_size, bool force_new_hash_codes))
    IL2CPP_REGISTER_METHOD(0x02DB83E0, bool, TryAdd, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, int32_t key, app::ActivateAnimatorSystem_ObjectState value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283D900, void, System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::KeyValuePair_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState___Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02EB7FC0, void, ICollection_CopyTo, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047908F8, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283F850, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EB85B0, app::Object*, ICollection_get_SyncRoot, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E020, app::ICollection*, IDictionary_get_Keys, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283E050, app::ICollection*, IDictionary_get_Values, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02DB8B80, app::Object*, IDictionary_get_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02EB8710, void, IDictionary_set_Item, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04795FE0, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__System_Collections_IDictionary_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB8A20, bool, IsCompatibleKey, (app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x047625C0, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__IsCompatibleKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02EB8B20, void, IDictionary_Add, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0470F4F0, Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState__System_Collections_IDictionary_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA7DD0, bool, IDictionary_Contains, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x028423A0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA7F50, void, IDictionary_Remove, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_ * this_ptr, app::Object* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_

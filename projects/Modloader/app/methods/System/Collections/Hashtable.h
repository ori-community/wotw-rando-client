#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Hashtable_bucket__Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IHashCodeProvider.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Hashtable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Hashtable * this_ptr, bool trash))
    IL2CPP_REGISTER_METHOD(0x01E49380, void, ctor_2, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02023110, void, ctor_3, (app::Hashtable * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02023120, void, ctor_4, (app::Hashtable * this_ptr, int32_t capacity, float load_factor))
    IL2CPP_REGISTER_METHOD(0x020233D0, void, ctor_5, (app::Hashtable * this_ptr, int32_t capacity, float load_factor, app::IHashCodeProvider* hcp, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02023560, void, ctor_6, (app::Hashtable * this_ptr, int32_t capacity, float load_factor, app::IEqualityComparer* equality_comparer))
    IL2CPP_REGISTER_METHOD(0x02023590, void, ctor_7, (app::Hashtable * this_ptr, app::IHashCodeProvider* hcp, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02023710, void, ctor_8, (app::Hashtable * this_ptr, app::IEqualityComparer* equality_comparer))
    IL2CPP_REGISTER_METHOD(0x02023750, void, ctor_9, (app::Hashtable * this_ptr, int32_t capacity, app::IEqualityComparer* equality_comparer))
    IL2CPP_REGISTER_METHOD(0x02023780, void, ctor_10, (app::Hashtable * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02023850, uint32_t, InitHash, (app::Hashtable * this_ptr, app::Object* key, int32_t hashsize, uint32_t* seed, uint32_t* incr))
    IL2CPP_REGISTER_METHOD(0x020238A0, void, Add, (app::Hashtable * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x020238C0, void, Clear, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02023AA0, app::Object*, Clone, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02023C90, bool, Contains, (app::Hashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02023CB0, bool, ContainsKey, (app::Hashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02023E80, void, CopyKeys, (app::Hashtable * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02023F30, void, CopyEntries, (app::Hashtable * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02024080, void, CopyTo, (app::Hashtable * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02024360, app::KeyValuePairs__Array*, ToKeyValuePairsArray, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02024580, void, CopyValues, (app::Hashtable * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02024630, app::Object*, get_Item, (app::Hashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02024870, void, set_Item, (app::Hashtable * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02024890, void, expand, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02024960, void, rehash_1, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02024990, void, UpdateVersion, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020249B0, void, rehash_2, (app::Hashtable * this_ptr, int32_t newsize, bool force_new_hash_code))
    IL2CPP_REGISTER_METHOD(0x02024C30, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02024DB0, app::IDictionaryEnumerator*, GetEnumerator, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02024F30, int32_t, GetHash, (app::Hashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02025000, bool, KeyEquals, (app::Hashtable * this_ptr, app::Object* item, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02025100, app::ICollection*, get_Keys, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02025250, app::ICollection*, get_Values, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020253A0, void, Insert, (app::Hashtable * this_ptr, app::Object* key, app::Object* nvalue, bool add))
    IL2CPP_REGISTER_METHOD(0x02025A60, void, putEntry, (app::Hashtable * this_ptr, app::Hashtable_bucket__Array* new_buckets, app::Object* key, app::Object* nvalue, int32_t hashcode))
    IL2CPP_REGISTER_METHOD(0x02025BA0, void, Remove, (app::Hashtable * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02025EE0, app::Object*, get_SyncRoot, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Hashtable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02026040, app::Hashtable*, Synchronized, (app::Hashtable * table))
    IL2CPP_REGISTER_METHOD(0x020261C0, void, GetObjectData, (app::Hashtable * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02026750, void, OnDeserialization, (app::Hashtable * this_ptr, app::Object* sender))
} // namespace app::classes::System::Collections::Hashtable

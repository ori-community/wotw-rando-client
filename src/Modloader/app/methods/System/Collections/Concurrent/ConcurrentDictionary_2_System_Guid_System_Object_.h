#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Object_.h>
#include <Modloader/app/structs/DictionaryEntry__Array.h>
#include <Modloader/app/structs/Func_2_Guid_Object_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Guid_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerable_1_System_Guid_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_Guid_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Guid_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Guid_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Guid_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AE9250, bool, IsValueWriteAtomic, )
    IL2CPP_REGISTER_METHOD(0x02ADDC30, void, ctor_1, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AE93B0,
        void,
        ctor_2,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        int32_t concurrency_level,
        int32_t capacity,
        bool grow_lock_array,
        app::IEqualityComparer_1_System_Guid_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02ADE240, bool, TryAdd, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02ADE380, bool, ContainsKey, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key)
    IL2CPP_REGISTER_METHOD(0x02ADE3D0, bool, TryRemove, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key, app::Object** value)
    IL2CPP_REGISTER_METHOD(
        0x02AE98D0,
        bool,
        TryRemoveInternal,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        app::Object** value,
        bool match_value,
        app::Object* old_value
    )
    IL2CPP_REGISTER_METHOD(0x02ADEA70, bool, TryGetValue, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key, app::Object** value)
    IL2CPP_REGISTER_METHOD(
        0x02AE9EA0,
        bool,
        TryGetValueInternal,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        int32_t hashcode,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(0x02AEA090, void, Clear, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AEA3F0,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Guid_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02AEA6E0,
        app::KeyValuePair_2_System_Guid_System_Object___Array*,
        ToArray,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADF730,
        void,
        CopyToPairs,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Guid_System_Object___Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADF810,
        void,
        CopyToEntries,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::DictionaryEntry__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADF960,
        void,
        CopyToObjects,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Object__Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02ADFAD0,
        app::IEnumerator_1_KeyValuePair_2_System_Guid_System_Object_*,
        GetEnumerator,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AEA9C0,
        bool,
        TryAddInternal,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        int32_t hashcode,
        app::Object* value,
        bool update_if_exists,
        bool acquire_lock,
        app::Object** resulting_value
    )
    IL2CPP_REGISTER_METHOD(0x02AE05F0, app::Object*, get_Item, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key)
    IL2CPP_REGISTER_METHOD(0x02AE06F0, void, set_Item, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Guid key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02AEB360, void, ThrowKeyNotFoundException, )
    IL2CPP_REGISTER_METHOD(0x02AEB3B0, void, ThrowKeyNullException, )
    IL2CPP_REGISTER_METHOD(0x02AEB410, int32_t, get_Count, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AE0A10, int32_t, GetCountInternal, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AEB540,
        app::Object*,
        GetOrAdd,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        app::Func_2_Guid_Object_* value_factory
    )
    IL2CPP_REGISTER_METHOD(0x02AEB720, bool, get_IsEmpty, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AEB8F0,
        void,
        System_Collections_Generic_IDictionary_TKey_TValue__Add,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02AE0F70,
        bool,
        System_Collections_Generic_IDictionary_TKey_TValue__Remove,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Guid key
    )
    IL2CPP_REGISTER_METHOD(0x02AE0FC0, app::ICollection_1_System_Guid_*, get_Keys, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AE0FC0,
        app::IEnumerable_1_System_Guid_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02AE0FF0, app::ICollection_1_System_Object_*, get_Values, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AE0FF0,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AE1020,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Guid_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x02AE10A0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Guid_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AEB9F0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Guid_System_Object_ key_value_pair
    )
    IL2CPP_REGISTER_METHOD(0x02AE1230, app::IEnumerator*, IEnumerable_GetEnumerator, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AEBAD0,
        void,
        IDictionary_Add,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02AE1520, bool, IDictionary_Contains, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02AE16A0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsFixedSize, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IDictionary_get_IsReadOnly, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AE0FC0, app::ICollection*, IDictionary_get_Keys, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AE17C0, void, IDictionary_Remove, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02AE0FF0, app::ICollection*, IDictionary_get_Values, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AE1940, app::Object*, IDictionary_get_Item, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02AEBD90,
        void,
        IDictionary_set_Item,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02AEC070,
        void,
        ICollection_CopyTo,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AEC490, app::Object*, ICollection_get_SyncRoot, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AEC4F0,
        void,
        GrowTable,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        app::ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Object_* tables
    )
    IL2CPP_REGISTER_METHOD(0x02AE2D10, int32_t, GetBucket, int32_t hashcode, int32_t bucket_count)
    IL2CPP_REGISTER_METHOD(
        0x02AE2D20,
        void,
        GetBucketAndLockNo,
        int32_t hashcode,
        int32_t* bucket_no,
        int32_t* lock_no,
        int32_t bucket_count,
        int32_t lock_count
    )
    IL2CPP_REGISTER_METHOD(0x02AE2D40, int32_t, get_DefaultConcurrencyLevel, )
    IL2CPP_REGISTER_METHOD(0x02AECFD0, void, AcquireAllLocks, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr, int32_t* locks_acquired)
    IL2CPP_REGISTER_METHOD(
        0x02AED1A0,
        void,
        AcquireLocks,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        int32_t from_inclusive,
        int32_t to_exclusive,
        int32_t* locks_acquired
    )
    IL2CPP_REGISTER_METHOD(
        0x02AE3070,
        void,
        ReleaseLocks,
        app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr,
        int32_t from_inclusive,
        int32_t to_exclusive
    )
    IL2CPP_REGISTER_METHOD(0x02AED2F0, app::ReadOnlyCollection_1_System_Guid_*, GetKeys, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AED780, app::ReadOnlyCollection_1_System_Object_*, GetValues, app::ConcurrentDictionary_2_System_Guid_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AE3A20, void, cctor, )
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_Guid_System_Object_

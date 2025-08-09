#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyDictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02B83030,
        app::ReadOnlyDictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_*,
        get_Keys,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B831A0,
        app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_*,
        get_Values,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x019D75C0,
        app::ICollection_1_System_Object_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Keys,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x019DA540,
        app::ICollection_1_System_Object_*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Values,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02B83390, app::Object*, get_Item, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02B83390,
        app::Object*,
        System_Collections_Generic_IDictionary_TKey_TValue__get_Item,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IDictionary_TKey_TValue__set_Item,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B833F0, int32_t, get_Count, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x003FFDF0,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IDictionary_get_IsFixedSize, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IDictionary_get_IsReadOnly, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D75C0, app::ICollection*, IDictionary_get_Keys, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DA540, app::ICollection*, IDictionary_get_Values, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B83930, app::Object*, IDictionary_get_Item, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IDictionary_set_Item,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B83F60, app::Object*, ICollection_get_SyncRoot, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019D75C0,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x019DA540,
        app::IEnumerable_1_System_Object_*,
        System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02B82AA0, bool, ContainsKey, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02B83310,
        bool,
        TryGetValue,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IDictionary_TKey_TValue__Add,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_IDictionary_TKey_TValue__Remove,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02B83450,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x02B83520,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Clear,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        bool,
        System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x02B83590,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*,
        GetEnumerator,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02B835F0, app::IEnumerator*, IEnumerable_GetEnumerator, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B83680, bool, IsCompatibleKey, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        IDictionary_Add,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IDictionary_Clear, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B836F0, bool, IDictionary_Contains, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02B837C0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IDictionary_Remove, app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02B83A00,
        void,
        ICollection_CopyTo,
        app::ReadOnlyDictionary_2_System_Object_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyDictionary_2_System_Object_System_Object_

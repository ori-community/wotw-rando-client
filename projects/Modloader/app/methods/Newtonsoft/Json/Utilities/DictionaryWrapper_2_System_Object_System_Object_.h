#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DictionaryWrapper_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IReadOnlyDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Utilities::DictionaryWrapper_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D0C2A0, app::ICollection_1_System_Object_*, get_Keys, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0C770, app::ICollection_1_System_Object_*, get_Values, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0C8D0, app::Object*, get_Item, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01D0CA60, void, set_Item, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D0D3D0, int32_t, get_Count, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0D4C0, bool, get_IsReadOnly, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0DE10, app::Object*, IDictionary_get_Item, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x01D0DFD0,
        void,
        IDictionary_set_Item,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x01D0E5F0, bool, IDictionary_get_IsFixedSize, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0E6A0, app::ICollection*, IDictionary_get_Keys, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0E960, app::ICollection*, IDictionary_get_Values, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0EC20, bool, ICollection_get_IsSynchronized, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0ECC0, app::Object*, ICollection_get_SyncRoot, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0EE20, app::Object*, get_UnderlyingDictionary, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0BE80, void, ctor_1, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::IDictionary* dictionary)
    IL2CPP_REGISTER_METHOD(
        0x01D0BF20,
        void,
        ctor_2,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::IDictionary_2_System_Object_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x01D0BFC0,
        void,
        ctor_3,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::IReadOnlyDictionary_2_System_Object_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(0x01D0C060, void, Add_1, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D0C180, bool, ContainsKey, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01D0C400, bool, Remove_1, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x01D0C560,
        bool,
        TryGetValue,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(
        0x01D0CB90,
        void,
        Add_2,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x01D0CD50, void, Clear, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D0CE60,
        bool,
        Contains,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D0D020,
        void,
        CopyTo,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x01D0D5C0,
        bool,
        Remove_2,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01D0D770,
        app::IEnumerator_1_KeyValuePair_2_System_Object_System_Object_*,
        GetEnumerator,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01D0DC00, app::IEnumerator*, IEnumerable_GetEnumerator, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D0DC30,
        void,
        IDictionary_Add,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::Object* key,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x01D0E1B0, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D0E430, bool, IDictionary_Contains, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x01D0E7E0, void, Remove_3, app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x01D0EAA0,
        void,
        ICollection_CopyTo,
        app::DictionaryWrapper_2_System_Object_System_Object_* this_ptr,
        app::Array* array,
        int32_t index
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::DictionaryWrapper_2_System_Object_System_Object_

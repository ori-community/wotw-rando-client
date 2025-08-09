#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::ObjectModel::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_ {
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        app::IEqualityComparer_1_System_String_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFBFD0,
        bool,
        Contains,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        app::String* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFBD00,
        app::JsonProperty*,
        get_Item,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        app::String* key
    )
    IL2CPP_REGISTER_METHOD(
        0x002FBB00,
        app::IDictionary_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_*,
        get_Dictionary,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CFC290, void, ClearItems, app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CFC2F0,
        void,
        InsertItem,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        int32_t index,
        app::JsonProperty* item
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFC390,
        void,
        RemoveItem,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CFC490,
        void,
        SetItem,
        app::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_* this_ptr,
        int32_t index,
        app::JsonProperty* item
    )
} // namespace app::classes::System::Collections::ObjectModel::KeyedCollection_2_System_String_Newtonsoft_Json_Serialization_JsonProperty_

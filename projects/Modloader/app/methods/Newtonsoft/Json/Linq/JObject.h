#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ICollection_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Linq_JProperty_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/JObject.h>
#include <Modloader/app/structs/JProperty.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyChangingEventHandler.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringComparison__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>

namespace app::classes::Newtonsoft::Json::Linq::JObject {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IList_1_Newtonsoft_Json_Linq_JToken_*, get_ChildrenTokens, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F09120, void, add_PropertyChanged, app::JObject* this_ptr, app::PropertyChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F09210, void, remove_PropertyChanged, app::JObject* this_ptr, app::PropertyChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F09300, void, add_PropertyChanging, app::JObject* this_ptr, app::PropertyChangingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F093F0, void, remove_PropertyChanging, app::JObject* this_ptr, app::PropertyChangingEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01F094E0, void, ctor_1, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F09630, void, ctor_2, app::JObject* this_ptr, app::JObject* other)
    IL2CPP_REGISTER_METHOD(0x01F09790, int32_t, IndexOfItem, app::JObject* this_ptr, app::JToken* item)
    IL2CPP_REGISTER_METHOD(0x01F098E0, void, InsertItem, app::JObject* this_ptr, int32_t index, app::JToken* item, bool skip_parent_check)
    IL2CPP_REGISTER_METHOD(0x01F09950, void, ValidateToken, app::JObject* this_ptr, app::JToken* o, app::JToken* existing)
    IL2CPP_REGISTER_METHOD(0x01F09C30, void, InternalPropertyChanged, app::JObject* this_ptr, app::JProperty* child_property)
    IL2CPP_REGISTER_METHOD(0x01F09F10, void, InternalPropertyChanging, app::JObject* this_ptr, app::JProperty* child_property)
    IL2CPP_REGISTER_METHOD(0x01F09F40, app::JToken*, CloneToken, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::JTokenType__Enum, get_Type, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0A1B0, app::IEnumerable_1_Newtonsoft_Json_Linq_JProperty_*, Properties, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0A230, app::JProperty*, Property_1, app::JObject* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01F0A240, app::JProperty*, Property_2, app::JObject* this_ptr, app::String* name, app::StringComparison__Enum comparison)
    IL2CPP_REGISTER_METHOD(0x01F0A410, app::JToken*, get_Item, app::JObject* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01F0A4E0, void, set_Item, app::JObject* this_ptr, app::String* property_name, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F0A6B0, app::JObject*, Load, app::JsonReader* reader, app::JsonLoadSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01F0A990, void, WriteTo, app::JObject* this_ptr, app::JsonWriter* writer, app::JsonConverter__Array* converters)
    IL2CPP_REGISTER_METHOD(0x01F0AB70, void, Add, app::JObject* this_ptr, app::String* property_name, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F0ACE0, bool, ContainsKey, app::JObject* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01F0AE60, app::ICollection_1_System_String_*, IDictionary_string__JToken__get_Keys, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0AF10, bool, Remove, app::JObject* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01F0AFF0, bool, TryGetValue, app::JObject* this_ptr, app::String* property_name, app::JToken** value)
    IL2CPP_REGISTER_METHOD(0x01F0B040, app::ICollection_1_Newtonsoft_Json_Linq_JToken_*, IDictionary_string__JToken__get_Values, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F0B090,
        void,
        ICollection_KeyValuePair_string__JToken___Add,
        app::JObject* this_ptr,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item
    )
    IL2CPP_REGISTER_METHOD(0x01F04500, void, ICollection_KeyValuePair_string__JToken___Clear, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F0B210,
        bool,
        ICollection_KeyValuePair_string__JToken___Contains,
        app::JObject* this_ptr,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01F0B2D0,
        void,
        ICollection_KeyValuePair_string__JToken___CopyTo,
        app::JObject* this_ptr,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_KeyValuePair_string__JToken___get_IsReadOnly, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F0B650,
        bool,
        ICollection_KeyValuePair_string__JToken___Remove,
        app::JObject* this_ptr,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ item
    )
    IL2CPP_REGISTER_METHOD(0x01F0B780, app::IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_*, GetEnumerator, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0B8D0, void, OnPropertyChanged, app::JObject* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01F0BA50, void, OnPropertyChanging, app::JObject* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01F0BC30, app::PropertyDescriptorCollection*, ICustomTypeDescriptor_GetProperties_1, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F0BCB0,
        app::PropertyDescriptorCollection*,
        ICustomTypeDescriptor_GetProperties_2,
        app::JObject* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x01F0C150, app::AttributeCollection*, ICustomTypeDescriptor_GetAttributes, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, ICustomTypeDescriptor_GetClassName, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, ICustomTypeDescriptor_GetComponentName, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0C1F0, app::TypeConverter*, ICustomTypeDescriptor_GetConverter, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EventDescriptor_1*, ICustomTypeDescriptor_GetDefaultEvent, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PropertyDescriptor*, ICustomTypeDescriptor_GetDefaultProperty, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, ICustomTypeDescriptor_GetEditor, app::JObject* this_ptr, app::Type* editor_base_type)
    IL2CPP_REGISTER_METHOD(
        0x01F0C330,
        app::EventDescriptorCollection*,
        ICustomTypeDescriptor_GetEvents_1,
        app::JObject* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x01F0C3D0, app::EventDescriptorCollection*, ICustomTypeDescriptor_GetEvents_2, app::JObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F0C470, app::Object*, ICustomTypeDescriptor_GetPropertyOwner, app::JObject* this_ptr, app::PropertyDescriptor* pd)
    IL2CPP_REGISTER_METHOD(0x01F0C550, app::DynamicMetaObject*, GetMetaObject, app::JObject* this_ptr, app::Expression* parameter)
} // namespace app::classes::Newtonsoft::Json::Linq::JObject

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Object_Object_.h>
#include <Modloader/app/structs/IAttributeProvider.h>
#include <Modloader/app/structs/IValueProvider.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DefaultValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ObjectCreationHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>
#include <Modloader/app/structs/Required__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonProperty {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::JsonContract*, get_PropertyContract, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_PropertyContract, app::JsonProperty* this_ptr, app::JsonContract* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_PropertyName, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01872E70, void, set_PropertyName, app::JsonProperty* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type*, get_DeclaringType, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DeclaringType, app::JsonProperty* this_ptr, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Nullable_1_Int32_, get_Order, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Order, app::JsonProperty* this_ptr, app::Nullable_1_Int32_ value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_UnderlyingName, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_UnderlyingName, app::JsonProperty* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IValueProvider*, get_ValueProvider, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_ValueProvider, app::JsonProperty* this_ptr, app::IValueProvider* value)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_AttributeProvider, app::JsonProperty* this_ptr, app::IAttributeProvider* value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Type*, get_PropertyType, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01872F90, void, set_PropertyType, app::JsonProperty* this_ptr, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::JsonConverter*, get_Converter, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Converter, app::JsonProperty* this_ptr, app::JsonConverter* value)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_Ignored, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_Ignored, app::JsonProperty* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_Readable, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653FA0, void, set_Readable, app::JsonProperty* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01873050, bool, get_Writable, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873060, void, set_Writable, app::JsonProperty* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01873070, bool, get_HasMemberAttribute, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873080, void, set_HasMemberAttribute, app::JsonProperty* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01873090, app::Object*, get_DefaultValue, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018730A0, void, set_DefaultValue, app::JsonProperty* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018730B0, app::Object*, GetResolvedDefaultValue, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018731B0, app::Required__Enum, get_Required, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873240, app::Nullable_1_Boolean_, get_IsReference, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873250, void, set_IsReference, app::JsonProperty* this_ptr, app::Nullable_1_Boolean_ value)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Nullable_1_Newtonsoft_Json_NullValueHandling_, get_NullValueHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_NullValueHandling, app::JsonProperty* this_ptr, app::Nullable_1_Newtonsoft_Json_NullValueHandling_ value)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Nullable_1_Newtonsoft_Json_DefaultValueHandling_, get_DefaultValueHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_DefaultValueHandling, app::JsonProperty* this_ptr, app::Nullable_1_Newtonsoft_Json_DefaultValueHandling_ value)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_, get_ReferenceLoopHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FBC70,
        void,
        set_ReferenceLoopHandling,
        app::JsonProperty* this_ptr,
        app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ value
    )
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Nullable_1_Newtonsoft_Json_ObjectCreationHandling_, get_ObjectCreationHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FBC90,
        void,
        set_ObjectCreationHandling,
        app::JsonProperty* this_ptr,
        app::Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ value
    )
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_, get_TypeNameHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_TypeNameHandling, app::JsonProperty* this_ptr, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_ value)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::Predicate_1_Object_*, get_ShouldSerialize, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_ShouldSerialize, app::JsonProperty* this_ptr, app::Predicate_1_Object_* value)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::Predicate_1_Object_*, get_ShouldDeserialize, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Predicate_1_Object_*, get_GetIsSpecified, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_GetIsSpecified, app::JsonProperty* this_ptr, app::Predicate_1_Object_* value)
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Action_2_Object_Object_*, get_SetIsSpecified, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_SetIsSpecified, app::JsonProperty* this_ptr, app::Action_2_Object_Object_* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, ToString, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::JsonConverter*, get_ItemConverter, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_ItemConverter, app::JsonProperty* this_ptr, app::JsonConverter* value)
    IL2CPP_REGISTER_METHOD(0x01873260, app::Nullable_1_Boolean_, get_ItemIsReference, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873270, void, set_ItemIsReference, app::JsonProperty* this_ptr, app::Nullable_1_Boolean_ value)
    IL2CPP_REGISTER_METHOD(0x01873280, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_, get_ItemTypeNameHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01873290, void, set_ItemTypeNameHandling, app::JsonProperty* this_ptr, app::Nullable_1_Newtonsoft_Json_TypeNameHandling_ value)
    IL2CPP_REGISTER_METHOD(0x018732A0, app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_, get_ItemReferenceLoopHandling, app::JsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018732B0,
        void,
        set_ItemReferenceLoopHandling,
        app::JsonProperty* this_ptr,
        app::Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ value
    )
    IL2CPP_REGISTER_METHOD(0x018732C0, void, WritePropertyName, app::JsonProperty* this_ptr, app::JsonWriter* writer)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JsonProperty* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonProperty

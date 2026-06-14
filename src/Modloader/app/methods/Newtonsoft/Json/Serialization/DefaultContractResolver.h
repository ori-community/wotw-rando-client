#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/DefaultContractResolver.h>
#include <Modloader/app/structs/DefaultJsonNameTable.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IValueProvider.h>
#include <Modloader/app/structs/JsonArrayContract.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/JsonDictionaryContract.h>
#include <Modloader/app/structs/JsonDynamicContract.h>
#include <Modloader/app/structs/JsonISerializableContract.h>
#include <Modloader/app/structs/JsonLinqContract.h>
#include <Modloader/app/structs/JsonObjectContract.h>
#include <Modloader/app/structs/JsonPrimitiveContract.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/JsonStringContract.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_.h>
#include <Modloader/app/structs/List_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/NamingStrategy.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::DefaultContractResolver {
    IL2CPP_REGISTER_METHOD(0x0185DEC0, app::IContractResolver*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x0185DF60, bool, get_DynamicCodeGeneration, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::BindingFlags__Enum, get_DefaultMembersSearchFlags, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_DefaultMembersSearchFlags, app::DefaultContractResolver* this_ptr, app::BindingFlags__Enum value)
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_SerializeCompilerGeneratedMembers, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185DFF0, bool, get_IgnoreSerializableInterface, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185E000, bool, get_IgnoreSerializableAttribute, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185E010, void, set_IgnoreSerializableAttribute, app::DefaultContractResolver* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0185E020, bool, get_IgnoreIsSpecifiedMembers, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IgnoreShouldSerializeMembers, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::NamingStrategy*, get_NamingStrategy, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185E030, void, ctor, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0185E3A0, app::JsonContract*, ResolveContract, app::DefaultContractResolver* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0185E480, bool, FilterMembers, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(
        0x0185E6B0,
        app::List_1_System_Reflection_MemberInfo_*,
        GetSerializableMembers,
        app::DefaultContractResolver* this_ptr,
        app::Type* object_type
    )
    IL2CPP_REGISTER_METHOD(0x0185F230, bool, ShouldSerializeEntityMember, app::DefaultContractResolver* this_ptr, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(0x0185F3C0, app::JsonObjectContract*, CreateObjectContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x0185FFA0, void, ThrowUnableToSerializeError, app::Object* o, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01860090, app::MemberInfo_1*, GetExtensionDataMemberForType, app::DefaultContractResolver* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x018603E0, void, SetExtensionDataDelegates, app::JsonObjectContract* contract, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(0x018611C0, app::ConstructorInfo*, GetAttributeConstructor, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x01861690,
        app::ConstructorInfo*,
        GetImmutableConstructor,
        app::DefaultContractResolver* this_ptr,
        app::Type* object_type,
        app::JsonPropertyCollection* member_properties
    )
    IL2CPP_REGISTER_METHOD(0x018618B0, app::ConstructorInfo*, GetParameterizedConstructor, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x01861900,
        app::IList_1_Newtonsoft_Json_Serialization_JsonProperty_*,
        CreateConstructorParameters,
        app::DefaultContractResolver* this_ptr,
        app::ConstructorInfo* constructor,
        app::JsonPropertyCollection* member_properties
    )
    IL2CPP_REGISTER_METHOD(
        0x01861BA0,
        app::JsonProperty*,
        MatchProperty,
        app::DefaultContractResolver* this_ptr,
        app::JsonPropertyCollection* properties,
        app::String* name,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(
        0x01861CA0,
        app::JsonProperty*,
        CreatePropertyFromConstructorParameter,
        app::DefaultContractResolver* this_ptr,
        app::JsonProperty* matching_member_property,
        app::ParameterInfo_1* parameter_info
    )
    IL2CPP_REGISTER_METHOD(0x018620F0, app::JsonConverter*, ResolveContractConverter, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01862190, app::Func_1_Object_*, GetDefaultCreator, app::DefaultContractResolver* this_ptr, app::Type* created_type)
    IL2CPP_REGISTER_METHOD(0x01862270, void, InitializeContract, app::DefaultContractResolver* this_ptr, app::JsonContract* contract)
    IL2CPP_REGISTER_METHOD(0x01862640, void, ResolveCallbackMethods, app::DefaultContractResolver* this_ptr, app::JsonContract* contract, app::Type* t)
    IL2CPP_REGISTER_METHOD(
        0x01862B90,
        void,
        GetCallbackMethodsForType,
        app::DefaultContractResolver* this_ptr,
        app::Type* type,
        app::List_1_Newtonsoft_Json_Serialization_SerializationCallback_** on_serializing,
        app::List_1_Newtonsoft_Json_Serialization_SerializationCallback_** on_serialized,
        app::List_1_Newtonsoft_Json_Serialization_SerializationCallback_** on_deserializing,
        app::List_1_Newtonsoft_Json_Serialization_SerializationCallback_** on_deserialized,
        app::List_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_** on_error
    )
    IL2CPP_REGISTER_METHOD(0x01863620, bool, IsConcurrentOrObservableCollection, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x018637F0, bool, ShouldSkipDeserialized, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01863930, bool, ShouldSkipSerializing, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01863A70, app::List_1_System_Type_*, GetClassHierarchyForType, app::DefaultContractResolver* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01863CA0, app::JsonDictionaryContract*, CreateDictionaryContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01864560, app::JsonArrayContract*, CreateArrayContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x018649C0, app::JsonPrimitiveContract*, CreatePrimitiveContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01864B20, app::JsonLinqContract*, CreateLinqContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x01864C90,
        app::JsonISerializableContract*,
        CreateISerializableContract,
        app::DefaultContractResolver* this_ptr,
        app::Type* object_type
    )
    IL2CPP_REGISTER_METHOD(0x01864FB0, app::JsonDynamicContract*, CreateDynamicContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01865490, app::JsonStringContract*, CreateStringContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01865680, app::JsonContract*, CreateContract, app::DefaultContractResolver* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01865DC0, bool, IsJsonPrimitiveType, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01865E70, bool, IsIConvertible, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x01866040, bool, CanConvertToString, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x01866190,
        bool,
        IsValidCallback,
        app::MethodInfo_1* method_1,
        app::ParameterInfo_1__Array* parameters,
        app::Type* attribute_type,
        app::MethodInfo_1* current_callback,
        app::Type** prev_attribute_type
    )
    IL2CPP_REGISTER_METHOD(0x01866980, app::String*, GetClrTypeFullName, app::Type* type)
    IL2CPP_REGISTER_METHOD(
        0x01866AD0,
        app::IList_1_Newtonsoft_Json_Serialization_JsonProperty_*,
        CreateProperties,
        app::DefaultContractResolver* this_ptr,
        app::Type* type,
        app::MemberSerialization__Enum member_serialization
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DefaultJsonNameTable*, GetNameTable, app::DefaultContractResolver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01867000, app::IValueProvider*, CreateMemberValueProvider, app::DefaultContractResolver* this_ptr, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(
        0x01867360,
        app::JsonProperty*,
        CreateProperty,
        app::DefaultContractResolver* this_ptr,
        app::MemberInfo_1* member,
        app::MemberSerialization__Enum member_serialization
    )
    IL2CPP_REGISTER_METHOD(
        0x01867710,
        void,
        SetPropertySettingsFromAttributes,
        app::DefaultContractResolver* this_ptr,
        app::JsonProperty* property,
        app::Object* attribute_provider,
        app::String* name,
        app::Type* declaring_type,
        app::MemberSerialization__Enum member_serialization,
        bool* allow_non_public_access
    )
    IL2CPP_REGISTER_METHOD(0x01867E30, app::Predicate_1_Object_*, CreateShouldSerializeTest, app::DefaultContractResolver* this_ptr, app::MemberInfo_1* member)
    IL2CPP_REGISTER_METHOD(
        0x01868220,
        void,
        SetIsSpecifiedActions,
        app::DefaultContractResolver* this_ptr,
        app::JsonProperty* property,
        app::MemberInfo_1* member,
        bool allow_non_public_access
    )
    IL2CPP_REGISTER_METHOD(0x01868730, app::String*, ResolvePropertyName, app::DefaultContractResolver* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x01868760, app::String*, ResolveExtensionDataName, app::DefaultContractResolver* this_ptr, app::String* extension_data_name)
    IL2CPP_REGISTER_METHOD(0x01868780, app::String*, ResolveDictionaryKey, app::DefaultContractResolver* this_ptr, app::String* dictionary_key)
    IL2CPP_REGISTER_METHOD(0x018687B0, app::String*, GetResolvedPropertyName, app::DefaultContractResolver* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x018687D0, void, cctor, )
} // namespace app::classes::Newtonsoft::Json::Serialization::DefaultContractResolver

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataContractAttribute.h>
#include <Modloader/app/structs/DataMemberAttribute.h>
#include <Modloader/app/structs/DefaultValueAttribute.h>
#include <Modloader/app/structs/Func_2_Object_Object__1.h>
#include <Modloader/app/structs/IgnoreDataMemberAttribute.h>
#include <Modloader/app/structs/JsonContainerAttribute.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/JsonConverterAttribute.h>
#include <Modloader/app/structs/JsonExtensionDataAttribute.h>
#include <Modloader/app/structs/JsonIgnoreAttribute.h>
#include <Modloader/app/structs/JsonObjectAttribute.h>
#include <Modloader/app/structs/JsonPropertyAttribute.h>
#include <Modloader/app/structs/JsonRequiredAttribute.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/NamingStrategy.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ReflectionDelegateFactory.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonTypeReflector {
    IL2CPP_REGISTER_METHOD(0x01BF8DD0, bool, CanTypeDescriptorConvertString, app::Type* type, app::TypeConverter** type_converter)
    IL2CPP_REGISTER_METHOD(0x01BF9150, app::DataContractAttribute*, GetDataContractAttribute, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01BF9240, app::DataMemberAttribute*, GetDataMemberAttribute, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(0x01BF9500, app::MemberSerialization__Enum, GetObjectMemberSerialization, app::Type* object_type, bool ignore_serializable_attribute)
    IL2CPP_REGISTER_METHOD(0x01BF9650, app::JsonConverter*, GetJsonConverter, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x01BF97A0, app::JsonConverter*, CreateJsonConverterInstance, app::Type* converter_type, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01BF9910, app::NamingStrategy*, CreateNamingStrategyInstance, app::Type* naming_strategy_type, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01BF9A80, app::NamingStrategy*, GetContainerNamingStrategy, app::JsonContainerAttribute* container_attribute)
    IL2CPP_REGISTER_METHOD(0x01BF9B90, app::Func_2_Object_Object__1*, GetCreator, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01BF9E50, app::Type*, GetAssociatedMetadataType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01BF9F30, app::Type*, GetAssociateMetadataTypeFromAttribute, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01BFA250, bool, IsNonSerializable, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x01BFA300, bool, IsSerializable, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x01BFA3B0, bool, get_DynamicCodeGeneration, )
    IL2CPP_REGISTER_METHOD(0x01BFA990, bool, get_FullyTrusted, )
    IL2CPP_REGISTER_METHOD(0x01BFABB0, app::ReflectionDelegateFactory*, get_ReflectionDelegateFactory, )
    IL2CPP_REGISTER_METHOD(0x01BFAD30, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015F4A70, app::Object*, GetCachedAttribute_1, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x015F4880, app::Object*, GetAttribute_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x015F4580, app::Object*, GetAttribute_2, app::MemberInfo_1* member_info)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::Object*, GetAttribute_3, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::JsonPropertyAttribute*, GetAttribute_4, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::JsonRequiredAttribute*, GetAttribute_5, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::DataMemberAttribute*, GetAttribute_6, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4A70, app::JsonObjectAttribute*, GetCachedAttribute_2, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x015F4A70, app::JsonContainerAttribute*, GetCachedAttribute_3, app::Object* attribute_provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::JsonContainerAttribute*, GetAttribute_7, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::JsonIgnoreAttribute*, GetAttribute_8, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::JsonExtensionDataAttribute*, GetAttribute_9, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::IgnoreDataMemberAttribute*, GetAttribute_10, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4430, app::DefaultValueAttribute*, GetAttribute_11, app::Object* provider)
    IL2CPP_REGISTER_METHOD(0x015F4A70, app::JsonConverterAttribute*, GetCachedAttribute_4, app::Object* attribute_provider)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonTypeReflector

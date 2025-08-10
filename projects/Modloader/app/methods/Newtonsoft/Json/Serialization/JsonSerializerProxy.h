#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstructorHandling__Enum.h>
#include <Modloader/app/structs/DefaultValueHandling__Enum.h>
#include <Modloader/app/structs/EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_.h>
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IReferenceResolver.h>
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/JsonConverterCollection.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializerInternalBase.h>
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#include <Modloader/app/structs/JsonSerializerProxy.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/MetadataPropertyHandling__Enum.h>
#include <Modloader/app/structs/MissingMemberHandling__Enum.h>
#include <Modloader/app/structs/NullValueHandling__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectCreationHandling__Enum.h>
#include <Modloader/app/structs/PreserveReferencesHandling__Enum.h>
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeNameAssemblyFormatHandling__Enum.h>
#include <Modloader/app/structs/TypeNameHandling__Enum.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerProxy {
    IL2CPP_REGISTER_METHOD(
        0x01BF85F0,
        void,
        add_Error,
        app::JsonSerializerProxy* this_ptr,
        app::EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x01BF8620,
        void,
        remove_Error,
        app::JsonSerializerProxy* this_ptr,
        app::EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_* value
    )
    IL2CPP_REGISTER_METHOD(0x01BF8650, void, set_ReferenceResolver, app::JsonSerializerProxy* this_ptr, app::IReferenceResolver* value)
    IL2CPP_REGISTER_METHOD(0x01BF8680, app::ITraceWriter*, get_TraceWriter, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF86B0, void, set_TraceWriter, app::JsonSerializerProxy* this_ptr, app::ITraceWriter* value)
    IL2CPP_REGISTER_METHOD(0x01BF86E0, void, set_EqualityComparer, app::JsonSerializerProxy* this_ptr, app::IEqualityComparer* value)
    IL2CPP_REGISTER_METHOD(0x01BF8710, app::JsonConverterCollection*, get_Converters, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8740, void, set_DefaultValueHandling, app::JsonSerializerProxy* this_ptr, app::DefaultValueHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF8770, app::IContractResolver*, get_ContractResolver, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF87A0, void, set_ContractResolver, app::JsonSerializerProxy* this_ptr, app::IContractResolver* value)
    IL2CPP_REGISTER_METHOD(0x01BF87D0, void, set_MissingMemberHandling, app::JsonSerializerProxy* this_ptr, app::MissingMemberHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF8800, app::NullValueHandling__Enum, get_NullValueHandling, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8830, void, set_NullValueHandling, app::JsonSerializerProxy* this_ptr, app::NullValueHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF8860, void, set_ObjectCreationHandling, app::JsonSerializerProxy* this_ptr, app::ObjectCreationHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF8890, void, set_ReferenceLoopHandling, app::JsonSerializerProxy* this_ptr, app::ReferenceLoopHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF88C0, void, set_PreserveReferencesHandling, app::JsonSerializerProxy* this_ptr, app::PreserveReferencesHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF88F0, void, set_TypeNameHandling, app::JsonSerializerProxy* this_ptr, app::TypeNameHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF8920, app::MetadataPropertyHandling__Enum, get_MetadataPropertyHandling, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8950, void, set_MetadataPropertyHandling, app::JsonSerializerProxy* this_ptr, app::MetadataPropertyHandling__Enum value)
    IL2CPP_REGISTER_METHOD(
        0x01BF8980,
        void,
        set_TypeNameAssemblyFormatHandling,
        app::JsonSerializerProxy* this_ptr,
        app::TypeNameAssemblyFormatHandling__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x01BF89B0, void, set_ConstructorHandling, app::JsonSerializerProxy* this_ptr, app::ConstructorHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x01BF89E0, void, set_SerializationBinder, app::JsonSerializerProxy* this_ptr, app::ISerializationBinder* value)
    IL2CPP_REGISTER_METHOD(0x01BF8A10, app::StreamingContext, get_Context, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8A50, void, set_Context, app::JsonSerializerProxy* this_ptr, app::StreamingContext value)
    IL2CPP_REGISTER_METHOD(0x01BF8A90, bool, get_CheckAdditionalContent, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8AC0, app::JsonSerializerInternalBase*, GetInternalSerializer, app::JsonSerializerProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BF8AE0, void, ctor_1, app::JsonSerializerProxy* this_ptr, app::JsonSerializerInternalReader* serializer_reader)
    IL2CPP_REGISTER_METHOD(0x01BF8BA0, void, ctor_2, app::JsonSerializerProxy* this_ptr, app::JsonSerializerInternalWriter* serializer_writer)
    IL2CPP_REGISTER_METHOD(0x01BF8C60, app::Object*, DeserializeInternal, app::JsonSerializerProxy* this_ptr, app::JsonReader* reader, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(
        0x01BF8CB0,
        void,
        SerializeInternal,
        app::JsonSerializerProxy* this_ptr,
        app::JsonWriter* json_writer,
        app::Object* value,
        app::Type* root_type
    )
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerProxy

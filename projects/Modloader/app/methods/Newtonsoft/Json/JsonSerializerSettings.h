#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstructorHandling__Enum.h>
#include <Modloader/app/structs/DefaultValueHandling__Enum.h>
#include <Modloader/app/structs/EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_.h>
#include <Modloader/app/structs/Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_.h>
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_JsonConverter_.h>
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/JsonSerializerSettings.h>
#include <Modloader/app/structs/MetadataPropertyHandling__Enum.h>
#include <Modloader/app/structs/MissingMemberHandling__Enum.h>
#include <Modloader/app/structs/NullValueHandling__Enum.h>
#include <Modloader/app/structs/ObjectCreationHandling__Enum.h>
#include <Modloader/app/structs/PreserveReferencesHandling__Enum.h>
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TypeNameAssemblyFormatHandling__Enum.h>
#include <Modloader/app/structs/TypeNameHandling__Enum.h>

namespace app::classes::Newtonsoft::Json::JsonSerializerSettings {
    IL2CPP_REGISTER_METHOD(0x01EF0E50, app::ReferenceLoopHandling__Enum, get_ReferenceLoopHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF0EE0, app::MissingMemberHandling__Enum, get_MissingMemberHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF0F70, app::ObjectCreationHandling__Enum, get_ObjectCreationHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1000, app::NullValueHandling__Enum, get_NullValueHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1090, app::DefaultValueHandling__Enum, get_DefaultValueHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IList_1_Newtonsoft_Json_JsonConverter_*, get_Converters, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1120, app::PreserveReferencesHandling__Enum, get_PreserveReferencesHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF11B0, app::TypeNameHandling__Enum, get_TypeNameHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1240, app::MetadataPropertyHandling__Enum, get_MetadataPropertyHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF12D0, app::TypeNameAssemblyFormatHandling__Enum, get_TypeNameAssemblyFormatHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1360, app::ConstructorHandling__Enum, get_ConstructorHandling, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660430, app::IContractResolver*, get_ContractResolver, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::IEqualityComparer*, get_EqualityComparer, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00418200,
        app::Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_*,
        get_ReferenceResolverProvider,
        app::JsonSerializerSettings* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::ITraceWriter*, get_TraceWriter, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::ISerializationBinder*, get_SerializationBinder, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_*, get_Error, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF13F0, app::StreamingContext, get_Context, app::JsonSerializerSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF14E0, void, cctor, )
} // namespace app::classes::Newtonsoft::Json::JsonSerializerSettings

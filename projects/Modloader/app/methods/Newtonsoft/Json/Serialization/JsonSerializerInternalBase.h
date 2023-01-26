#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonSerializerInternalBase.h>
#include <Modloader/app/structs/BidirectionalDictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IJsonLineInfo.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonObjectContract.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/NullValueHandling__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
    IL2CPP_REGISTER_METHOD(0x01873D40, void, ctor, (app::JsonSerializerInternalBase * this_ptr, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01873E00, app::BidirectionalDictionary_2_System_String_System_Object_*, get_DefaultReferenceMappings, (app::JsonSerializerInternalBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01874110, app::NullValueHandling__Enum, ResolvedNullValueHandling, (app::JsonSerializerInternalBase * this_ptr, app::JsonObjectContract* container_contract, app::JsonProperty* property))
    IL2CPP_REGISTER_METHOD(0x018741F0, app::ErrorContext*, GetErrorContext, (app::JsonSerializerInternalBase * this_ptr, app::Object* current_object, app::Object* member, app::String* path, app::Exception* error))
    IL2CPP_REGISTER_METHOD(0x018743C0, void, ClearErrorContext, (app::JsonSerializerInternalBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01874480, bool, IsErrorHandled, (app::JsonSerializerInternalBase * this_ptr, app::Object* current_object, app::JsonContract* contract, app::Object* key_value, app::IJsonLineInfo* line_info, app::String* path, app::Exception* ex))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalBase

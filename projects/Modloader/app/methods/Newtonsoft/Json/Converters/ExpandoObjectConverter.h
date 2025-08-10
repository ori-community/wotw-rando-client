#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObjectConverter.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::ExpandoObjectConverter {
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        WriteJson,
        app::ExpandoObjectConverter* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(
        0x01A535C0,
        app::Object*,
        ReadJson,
        app::ExpandoObjectConverter* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A535D0, app::Object*, ReadValue, app::ExpandoObjectConverter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A537D0, app::Object*, ReadList, app::ExpandoObjectConverter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A539C0, app::Object*, ReadObject, app::ExpandoObjectConverter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A53D80, bool, CanConvert, app::ExpandoObjectConverter* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanWrite, app::ExpandoObjectConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExpandoObjectConverter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::ExpandoObjectConverter

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataSetConverter.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::DataSetConverter {
    IL2CPP_REGISTER_METHOD(
        0x01A4E990,
        void,
        WriteJson,
        app::DataSetConverter* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(
        0x01A4EE90,
        app::Object*,
        ReadJson,
        app::DataSetConverter* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A4F280, bool, CanConvert, app::DataSetConverter* this_ptr, app::Type* value_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DataSetConverter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::DataSetConverter

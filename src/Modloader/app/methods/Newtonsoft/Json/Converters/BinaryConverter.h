#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryConverter_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::BinaryConverter {
    IL2CPP_REGISTER_METHOD(
        0x01A4D430,
        void,
        WriteJson,
        app::BinaryConverter_1* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A4D4A0, app::Byte__Array*, GetByteArray, app::BinaryConverter_1* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01A4D6E0, void, EnsureReflectionObject, app::Type* t)
    IL2CPP_REGISTER_METHOD(
        0x01A4D8F0,
        app::Object*,
        ReadJson,
        app::BinaryConverter_1* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A4DD80, app::Byte__Array*, ReadByteArray, app::BinaryConverter_1* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A4E1D0, bool, CanConvert, app::BinaryConverter_1* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BinaryConverter_1* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::BinaryConverter

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectionObject.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/KeyValuePairConverter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::KeyValuePairConverter {
    IL2CPP_REGISTER_METHOD(0x01A53E30, app::ReflectionObject*, InitializeReflectionObject, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01A540F0, void, WriteJson, (app::KeyValuePairConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A543D0, app::Object*, ReadJson, (app::KeyValuePairConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A54A60, bool, CanConvert, (app::KeyValuePairConverter * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::KeyValuePairConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A54BB0, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::Converters::KeyValuePairConverter

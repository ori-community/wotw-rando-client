#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::KeyValuePairConverter {
    IL2CPP_REGISTER_METHOD(0x01A53E30, app::ReflectionObject*, InitializeReflectionObject, (app::Type * t))
    IL2CPP_REGISTER_METHODINFO(0x0476F130, KeyValuePairConverter_InitializeReflectionObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A540F0, void, WriteJson, (app::KeyValuePairConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A543D0, app::Object*, ReadJson, (app::KeyValuePairConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHODINFO(0x0477E6E0, KeyValuePairConverter_ReadJson__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A54A60, bool, CanConvert, (app::KeyValuePairConverter * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::KeyValuePairConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A54BB0, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::Converters::KeyValuePairConverter

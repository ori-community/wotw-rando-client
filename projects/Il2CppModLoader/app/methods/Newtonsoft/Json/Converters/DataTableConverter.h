#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::DataTableConverter {
    IL2CPP_REGISTER_METHOD(0x01A4F350, void, WriteJson, (app::DataTableConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A4F910, app::Object*, ReadJson, (app::DataTableConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHODINFO(0x0475BB60, DataTableConverter_ReadJson__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A4FCC0, void, CreateRow, (app::JsonReader * reader, app::DataTable* dt, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A50400, app::Type*, GetColumnDataType, (app::JsonReader * reader))
    IL2CPP_REGISTER_METHODINFO(0x04790328, DataTableConverter_GetColumnDataType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A50630, bool, CanConvert, (app::DataTableConverter * this_ptr, app::Type* value_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DataTableConverter * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::DataTableConverter

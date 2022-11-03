#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::EntityKeyMemberConverter {
    IL2CPP_REGISTER_METHOD(0x01A52B10, void, WriteJson, (app::EntityKeyMemberConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A52E80, void, ReadAndAssertProperty, (app::JsonReader * reader, app::String* property_name))
    IL2CPP_REGISTER_METHODINFO(0x047119C0, EntityKeyMemberConverter_ReadAndAssertProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A530D0, app::Object*, ReadJson, (app::EntityKeyMemberConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A53390, void, EnsureReflectionObject, (app::Type * object_type))
    IL2CPP_REGISTER_METHOD(0x01A53520, bool, CanConvert, (app::EntityKeyMemberConverter * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityKeyMemberConverter * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::EntityKeyMemberConverter

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_Union.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonReader.h>

namespace app::classes::Newtonsoft::Json::Converters::DiscriminatedUnionConverter {
    IL2CPP_REGISTER_METHOD(0x01A50700, app::Type*, CreateUnionTypeLookup, (app::Type * t))
    IL2CPP_REGISTER_METHODINFO(0x0478CA88, DiscriminatedUnionConverter_CreateUnionTypeLookup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A50990, app::DiscriminatedUnionConverter_Union*, CreateUnion, (app::Type * t))
    IL2CPP_REGISTER_METHODINFO(0x047124E8, DiscriminatedUnionConverter_CreateUnion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A511B0, void, WriteJson, (app::DiscriminatedUnionConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A518B0, app::Object*, ReadJson, (app::DiscriminatedUnionConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHODINFO(0x04749868, DiscriminatedUnionConverter_ReadJson__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A52340, bool, CanConvert, (app::DiscriminatedUnionConverter * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DiscriminatedUnionConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A526C0, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::Converters::DiscriminatedUnionConverter

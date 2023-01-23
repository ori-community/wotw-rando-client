#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISerializerPlugin.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Json::JsonWrapper {
    IL2CPP_REGISTER_METHOD(0x01847F50, app::ISerializerPlugin*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01847FF0, app::Object*, DeserializeObject_1, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x018480C0, app::String*, SerializeObject_1, (app::Object * json))
    IL2CPP_REGISTER_METHOD(0x01848190, app::String*, SerializeObject_2, (app::Object * json, app::Object* json_serializer_strategy))
    IL2CPP_REGISTER_METHOD(0x016A9A20, app::Object*, DeserializeObject_2, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x016A9AF0, app::Object*, DeserializeObject_3, (app::String * json, app::Object* json_serializer_strategy))
} // namespace app::classes::PlayFab::Json::JsonWrapper

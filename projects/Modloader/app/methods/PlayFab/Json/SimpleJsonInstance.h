#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SimpleJsonInstance.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Json::SimpleJsonInstance {
    IL2CPP_REGISTER_METHOD(0x01852E30, app::Object*, DeserializeObject_1, (app::SimpleJsonInstance * this_ptr, app::String* json))
    IL2CPP_REGISTER_METHOD(0x01852F40, app::String*, SerializeObject_1, (app::SimpleJsonInstance * this_ptr, app::Object* json))
    IL2CPP_REGISTER_METHOD(0x01853020, app::String*, SerializeObject_2, (app::SimpleJsonInstance * this_ptr, app::Object* json, app::Object* json_serializer_strategy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleJsonInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01853130, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x016A9F40, app::Object*, DeserializeObject_2, (app::SimpleJsonInstance * this_ptr, app::String* json))
    IL2CPP_REGISTER_METHOD(0x016AA030, app::Object*, DeserializeObject_3, (app::SimpleJsonInstance * this_ptr, app::String* json, app::Object* json_serializer_strategy))
    IL2CPP_REGISTER_METHOD(0x016A9E50, bool, DeserializeObject_4, (app::SimpleJsonInstance * this_ptr, app::String* json))
} // namespace app::classes::PlayFab::Json::SimpleJsonInstance

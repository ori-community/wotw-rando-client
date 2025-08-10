#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonArray.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Json::JsonArray {
    IL2CPP_REGISTER_METHOD(0x01846A70, void, ctor_1, app::JsonArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01846B10, void, ctor_2, app::JsonArray* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x01846BC0, app::String*, ToString, app::JsonArray* this_ptr)
} // namespace app::classes::PlayFab::Json::JsonArray

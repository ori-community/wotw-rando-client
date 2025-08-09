#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayeredAnimation_Input.h>

namespace app::classes::Moon::LayeredAnimation_Input {
    IL2CPP_REGISTER_METHOD(0x01B17140, bool, get_IsValid, app::LayeredAnimation_Input* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LayeredAnimation_Input* this_ptr)
} // namespace app::classes::Moon::LayeredAnimation_Input

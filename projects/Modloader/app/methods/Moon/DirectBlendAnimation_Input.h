#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectBlendAnimation_Input.h>

namespace app::classes::Moon::DirectBlendAnimation_Input {
    IL2CPP_REGISTER_METHOD(0x01B0E260, bool, get_IsValid, app::DirectBlendAnimation_Input* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DirectBlendAnimation_Input* this_ptr)
} // namespace app::classes::Moon::DirectBlendAnimation_Input

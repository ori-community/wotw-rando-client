#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BlendAnimation2D_Input.h>

namespace app::classes::Moon::BlendAnimation2D_Input {
    IL2CPP_REGISTER_METHOD(0x01B0B170, bool, get_IsValid, (app::BlendAnimation2D_Input * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BlendAnimation2D_Input * this_ptr))
} // namespace app::classes::Moon::BlendAnimation2D_Input

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SmartInput::KeyCodeButtonInput {
    IL2CPP_REGISTER_METHOD(0x006CB4D0, void, ctor, (app::KeyCodeButtonInput * this_ptr, app::KeyCode__Enum key_code))
    IL2CPP_REGISTER_METHOD(0x006CDA30, bool, GetValue, (app::KeyCodeButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::KeyCode__Enum, get_KeyCode, (app::KeyCodeButtonInput * this_ptr))
} // namespace app::classes::SmartInput::KeyCodeButtonInput

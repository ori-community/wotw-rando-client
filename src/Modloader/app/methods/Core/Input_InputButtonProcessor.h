#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Input_InputButtonProcessor.h>

namespace app::classes::Core::Input_InputButtonProcessor {
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ForcePressedFrames, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ForcePressedFrames, app::Input_InputButtonProcessor* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x011FE830, void, Update, app::Input_InputButtonProcessor* this_ptr, bool is_pressed)
    IL2CPP_REGISTER_METHOD(0x011FE860, bool, get_OnPressed, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011FE880, bool, get_OnPressedNotUsed, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011FE8A0, bool, get_OnReleased, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_Pressed, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011FE8B0, bool, get_PressedNotUsed, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011FE8D0, bool, get_Released, app::Input_InputButtonProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Input_InputButtonProcessor* this_ptr)
} // namespace app::classes::Core::Input_InputButtonProcessor

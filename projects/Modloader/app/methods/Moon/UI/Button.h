#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UI::Button {
    IL2CPP_REGISTER_METHOD(0x00D23FF0, void, OnSelected, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24000, void, OnDeselected, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24000, void, OnActivated, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24010, void, OnDeactivated, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24020, void, OnUserInput, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24260, app::Image_1*, get_Image, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24330, app::Text_1*, get_Text, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24400, app::InputTrigger*, get_Input, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D247E0, app::InputInfo*, get_Trigger, (app::Button_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D24890, void, ctor, (app::Button_1 * this_ptr))
} // namespace app::classes::Moon::UI::Button

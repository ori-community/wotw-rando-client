#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::Dropdown_OptionData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Dropdown_OptionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::Dropdown_OptionData * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::Dropdown_OptionData * this_ptr, app::Sprite* image))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::Dropdown_OptionData * this_ptr, app::String* text, app::Sprite* image))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String*, get_text, (app::Dropdown_OptionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_text, (app::Dropdown_OptionData * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::Sprite*, get_image, (app::Dropdown_OptionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_image, (app::Dropdown_OptionData * this_ptr, app::Sprite* value))
} // namespace app::classes::UnityEngine::UI::Dropdown_OptionData

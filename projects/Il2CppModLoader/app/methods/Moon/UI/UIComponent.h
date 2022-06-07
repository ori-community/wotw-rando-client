#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::UIComponent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::UIComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnActivated, (app::UIComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeactivated, (app::UIComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B4C0, app::RectTransform *, get_RectTransform, (app::UIComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Active, (app::UIComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B540, void, set_Active, (app::UIComponent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0118B570, void, PlayTimelineSequence, (app::UIComponent * this_ptr, app::LegacyTimelineSequence * sequence))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::UIComponent * this_ptr))
}

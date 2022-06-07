#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::UIContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::UIContext * this_ptr, app::IUIComponent * component))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUIComponent *, get_Component, (app::UIContext * this_ptr))
}

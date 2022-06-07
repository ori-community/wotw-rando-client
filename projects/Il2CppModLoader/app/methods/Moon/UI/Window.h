#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::Window {
    IL2CPP_REGISTER_METHOD(0x0118BC20, void, OnUserInput, (app::Window * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118BD70, void, Show, (app::Window * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118BE30, void, Hide, (app::Window * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsVisible, (app::Window * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WillBlockInput, (app::Window * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118BEF0, void, RegisterInteractable, (app::Window * this_ptr, app::UIInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x0118BF90, void, UnregisterInteractable, (app::Window * this_ptr, app::UIInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x0118C030, void, ctor, (app::Window * this_ptr))
}

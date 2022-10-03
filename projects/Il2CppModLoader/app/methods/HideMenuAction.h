#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HideMenuAction {
    IL2CPP_REGISTER_METHOD(0x00B493C0, bool, get_ShouldSKipUiBackgroundBlur, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49480, void, Perform, (app::HideMenuAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B494A0, void, Awake, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49540, void, OnEnable, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49760, void, OnDisable, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49820, void, FixedUpdate, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49890, void, EnableBackground, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B49BE0, void, DisableBackground, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B4A020, void, ctor, (app::HideMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::HideMenuAction

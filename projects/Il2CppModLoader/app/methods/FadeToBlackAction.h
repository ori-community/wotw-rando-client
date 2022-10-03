#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FadeToBlackAction {
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Duration, (app::FadeToBlackAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_Duration, (app::FadeToBlackAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0098F5F0, void, Perform, (app::FadeToBlackAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::FadeToBlackAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F710, bool, get_IsPerforming, (app::FadeToBlackAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F7D0, app::String*, GetNiceName, (app::FadeToBlackAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::FadeToBlackAction * this_ptr))
} // namespace app::classes::FadeToBlackAction

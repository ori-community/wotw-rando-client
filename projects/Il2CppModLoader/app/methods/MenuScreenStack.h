#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MenuScreenStack {
    IL2CPP_REGISTER_METHOD(0x009E6BB0, app::MenuScreen *, get_Top, (app::MenuScreenStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E6C50, void, Awake, (app::MenuScreenStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E6CE0, void, Push, (app::MenuScreenStack * this_ptr, app::MenuScreen * menu_screen))
    IL2CPP_REGISTER_METHOD(0x009E6DE0, void, Pop, (app::MenuScreenStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E6EC0, void, SuspendTop, (app::MenuScreenStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E70F0, void, ResumeTop, (app::MenuScreenStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E7320, void, Hide, (app::MenuScreenStack * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x009E7410, void, ctor, (app::MenuScreenStack * this_ptr))
}

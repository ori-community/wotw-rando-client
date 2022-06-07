#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::WindowManager {
    IL2CPP_REGISTER_METHOD(0x0118C190, app::WindowManager_1 *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0118C2F0, void, FixedUpdate, (app::WindowManager_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118C510, void, Register, (app::WindowManager_1 * this_ptr, app::Window * window))
    IL2CPP_REGISTER_METHOD(0x0118C6C0, void, Release, (app::WindowManager_1 * this_ptr, app::Window * window))
    IL2CPP_REGISTER_METHOD(0x0118C860, void, ctor, (app::WindowManager_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}

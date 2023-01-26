#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Button_c.h>
#include <Modloader/app/structs/UIContext.h>

namespace app::classes::Moon::UI::Button___c {
    IL2CPP_REGISTER_METHOD(0x00D24A70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Button_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__21_0, (app::Button_c * this_ptr, app::UIContext* _p0_))
} // namespace app::classes::Moon::UI::Button___c

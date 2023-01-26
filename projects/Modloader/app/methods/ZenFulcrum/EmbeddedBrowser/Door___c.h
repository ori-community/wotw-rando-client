#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Door_c.h>
#include <Modloader/app/structs/Door_OpenState__Enum.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Door___c {
    IL2CPP_REGISTER_METHOD(0x01DD6C70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Door_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__18_0, (app::Door_c * this_ptr, app::Door_OpenState__Enum state))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Door___c

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScrollUIAction {
    IL2CPP_REGISTER_METHOD(0x01069730, void, Perform, (app::ScrollUIAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01069740, void, Update, (app::ScrollUIAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069CB0, void, MouseScroll, (app::ScrollUIAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069DF0, void, SetHeight, (app::ScrollUIAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069FF0, void, Scroll, (app::ScrollUIAction * this_ptr, bool up))
    IL2CPP_REGISTER_METHOD(0x0106A130, void, ctor, (app::ScrollUIAction * this_ptr))
}

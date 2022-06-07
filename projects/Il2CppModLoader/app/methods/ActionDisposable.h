#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ActionDisposable {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ActionDisposable * this_ptr, app::Action * on_dispose))
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Dispose, (app::ActionDisposable * this_ptr))
}

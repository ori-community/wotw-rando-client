#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::Constraints::ActionDisposable {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ActionDisposable_1 * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Dispose, (app::ActionDisposable_1 * this_ptr))
}

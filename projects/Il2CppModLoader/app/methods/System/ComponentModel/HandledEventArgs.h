#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::HandledEventArgs {
    IL2CPP_REGISTER_METHOD(0x01FEE180, void, ctor_1, (app::HandledEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE220, void, ctor_2, (app::HandledEventArgs * this_ptr, bool default_handled_value))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Handled, (app::HandledEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Handled, (app::HandledEventArgs * this_ptr, bool value))
}

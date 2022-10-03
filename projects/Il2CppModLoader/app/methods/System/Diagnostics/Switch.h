#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Switch {
    IL2CPP_REGISTER_METHOD(0x02004A20, void, ctor_1, (app::Switch * this_ptr, app::String* display_name, app::String* description))
    IL2CPP_REGISTER_METHOD(0x02004AD0, void, ctor_2, (app::Switch * this_ptr, app::String* display_name, app::String* description, app::String* default_switch_value))
    IL2CPP_REGISTER_METHOD(0x02004DD0, void, _pruneCachedSwitches, ())
    IL2CPP_REGISTER_METHOD(0x020053C0, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Switch

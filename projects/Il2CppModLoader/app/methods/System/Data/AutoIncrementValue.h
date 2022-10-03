#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::AutoIncrementValue {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Auto, (app::AutoIncrementValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Auto, (app::AutoIncrementValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0214A610, app::AutoIncrementValue*, Clone, (app::AutoIncrementValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AutoIncrementValue * this_ptr))
} // namespace app::classes::System::Data::AutoIncrementValue

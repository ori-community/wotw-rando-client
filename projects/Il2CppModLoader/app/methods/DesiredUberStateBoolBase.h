#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DesiredUberStateBoolBase {
    IL2CPP_REGISTER_METHOD(0x01B578E0, void, WriteDesiredStates, (app::DesiredUberStateBoolBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B579F0, void, Revert, (app::DesiredUberStateBoolBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUberState*, get_UberState, (app::DesiredUberStateBoolBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57A40, app::String*, get_NiceName, (app::DesiredUberStateBoolBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57D10, bool, IsFulfilled, (app::DesiredUberStateBoolBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DesiredUberStateBoolBase * this_ptr))
} // namespace app::classes::DesiredUberStateBoolBase

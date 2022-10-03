#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DesiredUberStateByte {
    IL2CPP_REGISTER_METHOD(0x01B57E00, void, WriteDesiredStates, (app::DesiredUberStateByte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57F00, void, Revert, (app::DesiredUberStateByte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57FF0, app::IUberState*, get_UberState, (app::DesiredUberStateByte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B580B0, bool, IsFulfilled, (app::DesiredUberStateByte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B58190, app::String*, get_NiceName, (app::DesiredUberStateByte * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DesiredUberStateByte * this_ptr))
} // namespace app::classes::DesiredUberStateByte

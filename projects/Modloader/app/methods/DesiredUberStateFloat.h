#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredUberStateFloat.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DesiredUberStateFloat {
    IL2CPP_REGISTER_METHOD(0x01B59780, void, WriteDesiredStates, app::DesiredUberStateFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B598B0, void, Revert, app::DesiredUberStateFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUberState*, get_UberState, app::DesiredUberStateFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B59900, bool, IsFulfilled, app::DesiredUberStateFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B599E0, app::String*, get_NiceName, app::DesiredUberStateFloat* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DesiredUberStateFloat* this_ptr)
} // namespace app::classes::DesiredUberStateFloat

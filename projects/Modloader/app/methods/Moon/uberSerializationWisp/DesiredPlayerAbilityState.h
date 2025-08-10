#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredPlayerAbilityState.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::uberSerializationWisp::DesiredPlayerAbilityState {
    IL2CPP_REGISTER_METHOD(0x00F318D0, bool, IsFulfilled, app::DesiredPlayerAbilityState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F319D0, void, WriteDesiredStates, app::DesiredPlayerAbilityState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F31B50, void, Revert, app::DesiredPlayerAbilityState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUberState*, get_UberState, app::DesiredPlayerAbilityState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F31BF0, app::String*, get_NiceName, app::DesiredPlayerAbilityState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DesiredPlayerAbilityState* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::DesiredPlayerAbilityState

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EndState.h>
#include <Modloader/app/structs/IState.h>

namespace app::classes::EndState {
    IL2CPP_REGISTER_METHOD(0x00BFDB90, void, OnEnterState, app::EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitState, app::EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanTransition, app::EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IState*, GetNextState, app::EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EndState* this_ptr)
} // namespace app::classes::EndState

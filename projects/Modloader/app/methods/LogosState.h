#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LogosState.h>
#include <Modloader/app/structs/IState.h>

namespace app::classes::LogosState {
    IL2CPP_REGISTER_METHOD(0x009ECA10, void, OnEnterState, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ECBB0, void, OnLogosFinished, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ECC60, void, OnExitState, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, CanTransition, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ECDF0, app::IState*, GetNextState, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LogosState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::LogosState

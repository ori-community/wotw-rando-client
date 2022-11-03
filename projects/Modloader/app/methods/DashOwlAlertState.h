#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DashOwlAlertState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DashOwlAlertState * this_ptr, app::DashOwlEnemy* dash_owl))
    IL2CPP_REGISTER_METHOD(0x00DCBC70, void, OnEnter, (app::DashOwlAlertState * this_ptr))
} // namespace app::classes::DashOwlAlertState

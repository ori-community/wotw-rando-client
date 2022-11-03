#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NewSetupStateController_ChangeModel {
    IL2CPP_REGISTER_METHOD(0x01B777F0, bool, ShouldInvalidate, (app::NewSetupStateController_ChangeModel * this_ptr, app::SetupControllerStateHolder* holder))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NewSetupStateController_ChangeModel * this_ptr))
} // namespace app::classes::NewSetupStateController_ChangeModel

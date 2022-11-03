#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnterExitActionsExecutor {
    IL2CPP_REGISTER_METHOD(0x00C8B8A0, void, add_OnExitActionFinished, (app::EnterExitActionsExecutor * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00C8B990, void, remove_OnExitActionFinished, (app::EnterExitActionsExecutor * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00C8BA80, void, FixedUpdate, (app::EnterExitActionsExecutor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BB70, void, EnterTrigger, (app::EnterExitActionsExecutor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BCA0, void, ExitTrigger, (app::EnterExitActionsExecutor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BDD0, void, PerformEnterAction, (app::EnterExitActionsExecutor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BE00, void, PerformExitAction, (app::EnterExitActionsExecutor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8BE30, void, ctor, (app::EnterExitActionsExecutor * this_ptr))
} // namespace app::classes::EnterExitActionsExecutor

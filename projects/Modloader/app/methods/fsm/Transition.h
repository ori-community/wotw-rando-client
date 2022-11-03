#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::fsm::Transition {
    IL2CPP_REGISTER_METHOD(0x00F70AB0, void, ctor, (app::Transition_1 * this_ptr, app::IState_2* source_state, app::IState_2* target_state, app::ICondition* condition, app::IAction* action, app::IContext* context))
}

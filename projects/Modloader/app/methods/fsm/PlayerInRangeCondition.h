#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerInRangeCondition.h>

namespace app::classes::fsm::PlayerInRangeCondition {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerInRangeCondition * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BaurSelectedMemoryToReplayCondition {
    IL2CPP_REGISTER_METHOD(0x00F9B260, bool, Validate, (app::BaurSelectedMemoryToReplayCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BaurSelectedMemoryToReplayCondition * this_ptr))
} // namespace app::classes::BaurSelectedMemoryToReplayCondition

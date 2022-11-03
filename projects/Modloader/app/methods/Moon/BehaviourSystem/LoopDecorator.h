#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::LoopDecorator {
    IL2CPP_REGISTER_METHOD(0x0300E920, void, OnEnter, (app::LoopDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300E960, app::BehaviourStatus__Enum, OnExecute, (app::LoopDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEvaluateEachTick, (app::LoopDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300E9F0, void, ctor, (app::LoopDecorator * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::LoopDecorator

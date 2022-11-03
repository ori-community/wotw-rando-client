#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::TimeLimitDecorator {
    IL2CPP_REGISTER_METHOD(0x03011D90, float, get_TimeRemaining, (app::TimeLimitDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03011E20, float, get_TimeRemainingNormalized, (app::TimeLimitDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB680, void, Awake, (app::TimeLimitDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB680, void, OnEnter, (app::TimeLimitDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x03011E70, app::BehaviourStatus__Enum, OnExecute, (app::TimeLimitDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEvaluateEachTick, (app::TimeLimitDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03011F10, float, GetUtility, (app::TimeLimitDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x03011F40, void, ctor, (app::TimeLimitDecorator * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::TimeLimitDecorator

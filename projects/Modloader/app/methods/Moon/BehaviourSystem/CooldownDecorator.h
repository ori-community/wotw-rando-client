#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::CooldownDecorator {
    IL2CPP_REGISTER_METHOD(0x0300C550, float, get_TimeRemaining, (app::CooldownDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300C5E0, float, get_TimeRemainingNormalized, (app::CooldownDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300C630, void, Awake, (app::CooldownDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300C630, void, ResetInitCooldown, (app::CooldownDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300C6E0, app::BehaviourStatus__Enum, OnExecute, (app::CooldownDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300C740, void, OnExit, (app::CooldownDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300C7B0, float, GetUtility, (app::CooldownDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300C7E0, void, ctor, (app::CooldownDecorator * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::CooldownDecorator

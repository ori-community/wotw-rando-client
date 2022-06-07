#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NormalSkeetoDiveAttackDecorator {
    IL2CPP_REGISTER_METHOD(0x0060C1D0, app::BehaviourStatus__Enum, OnExecute, (app::NormalSkeetoDiveAttackDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C270, float, GetUtility, (app::NormalSkeetoDiveAttackDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C2C0, bool, CheckCondition, (app::NormalSkeetoDiveAttackDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::NormalSkeetoDiveAttackDecorator * this_ptr))
}

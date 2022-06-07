#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::RemapDecorator {
    IL2CPP_REGISTER_METHOD(0x0300F620, app::String *, get_Info, (app::RemapDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300F800, app::BehaviourStatus__Enum, OnExecute, (app::RemapDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEvaluateEachTick, (app::RemapDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300F870, void, ctor, (app::RemapDecorator * this_ptr))
}

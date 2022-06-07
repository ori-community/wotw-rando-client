#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BehaviourSet {
    IL2CPP_REGISTER_METHOD(0x00F9B350, void, StopAllBehaviours, (app::BehaviourSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9B450, void, ctor, (app::BehaviourSet * this_ptr))
}

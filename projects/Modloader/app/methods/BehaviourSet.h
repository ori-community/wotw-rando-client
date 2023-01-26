#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourSet.h>

namespace app::classes::BehaviourSet {
    IL2CPP_REGISTER_METHOD(0x00F9B350, void, StopAllBehaviours, (app::BehaviourSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9B450, void, ctor, (app::BehaviourSet * this_ptr))
} // namespace app::classes::BehaviourSet

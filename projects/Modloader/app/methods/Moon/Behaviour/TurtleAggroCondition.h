#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleAggroCondition.h>

namespace app::classes::Moon::Behaviour::TurtleAggroCondition {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TurtleAggroCondition * this_ptr))
}

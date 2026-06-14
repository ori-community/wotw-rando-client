#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleAttackSelector.h>

namespace app::classes::TurtleAttackSelector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TurtleAttackSelector* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShrineCombat_States.h>

namespace app::classes::ShrineCombat_States {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ShrineCombat_States* this_ptr)
}

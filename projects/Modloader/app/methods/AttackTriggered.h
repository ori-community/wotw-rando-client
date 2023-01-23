#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttackTriggered.h>

namespace app::classes::AttackTriggered {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttackTriggered * this_ptr))
}

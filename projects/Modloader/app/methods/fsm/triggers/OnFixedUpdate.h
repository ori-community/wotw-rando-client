#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OnFixedUpdate_1.h>

namespace app::classes::fsm::triggers::OnFixedUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OnFixedUpdate_1 * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnEnterBash.h>

namespace app::classes::fsm::triggers::OnEnterBash {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnEnterBash* this_ptr)
}

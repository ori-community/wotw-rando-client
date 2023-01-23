#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OnSeinNearEnter.h>

namespace app::classes::fsm::triggers::OnSeinNearEnter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OnSeinNearEnter * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SendMessageAction {
    IL2CPP_REGISTER_METHOD(0x00AB5B70, void, Perform, (app::SendMessageAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00AB5C20, void, ctor, (app::SendMessageAction * this_ptr))
} // namespace app::classes::SendMessageAction

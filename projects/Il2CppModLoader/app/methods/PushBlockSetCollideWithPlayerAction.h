#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PushBlockSetCollideWithPlayerAction {
    IL2CPP_REGISTER_METHOD(0x00C81BC0, void, Perform, (app::PushBlockSetCollideWithPlayerAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C81BF0, void, Serialize, (app::PushBlockSetCollideWithPlayerAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x004C8C00, void, ctor, (app::PushBlockSetCollideWithPlayerAction * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerActionSequence {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerActionSequence * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, CreateData, (app::ServerActionSequence * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00AB9480, app::Component_1*, ApplyData, (app::ServerActionSequence * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerActionSequence

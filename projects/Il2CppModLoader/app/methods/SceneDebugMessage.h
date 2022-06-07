#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneDebugMessage {
    IL2CPP_REGISTER_METHOD(0x03113B90, void, OnDrawGizmos, (app::SceneDebugMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03113CA0, void, ctor, (app::SceneDebugMessage * this_ptr))
}

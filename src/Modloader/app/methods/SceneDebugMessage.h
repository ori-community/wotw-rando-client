#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneDebugMessage.h>

namespace app::classes::SceneDebugMessage {
    IL2CPP_REGISTER_METHOD(0x03113B90, void, OnDrawGizmos, app::SceneDebugMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03113CA0, void, ctor, app::SceneDebugMessage* this_ptr)
} // namespace app::classes::SceneDebugMessage

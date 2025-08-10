#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageEventArgs.h>

namespace app::classes::UnityEngine::Networking::PlayerConnection::MessageEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MessageEventArgs* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerConnection_Register_c_AnonStorey0.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers.h>

namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection__Register_c__AnonStorey0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerConnection_Register_c_AnonStorey0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0253F570,
        bool,
        __m__0,
        app::PlayerConnection_Register_c_AnonStorey0* this_ptr,
        app::PlayerEditorConnectionEvents_MessageTypeSubscribers* x
    )
} // namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection__Register_c__AnonStorey0

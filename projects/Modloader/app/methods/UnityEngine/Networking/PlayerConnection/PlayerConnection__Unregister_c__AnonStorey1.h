#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerConnection_Unregister_c_AnonStorey1.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers.h>

namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection__Unregister_c__AnonStorey1 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerConnection_Unregister_c_AnonStorey1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0253F670,
        bool,
        __m__0,
        app::PlayerConnection_Unregister_c_AnonStorey1* this_ptr,
        app::PlayerEditorConnectionEvents_MessageTypeSubscribers* x
    )
} // namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection__Unregister_c__AnonStorey1

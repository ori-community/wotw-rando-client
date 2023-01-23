#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/QosServer.h>

namespace app::classes::PlayFab::MultiplayerModels::QosServer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QosServer * this_ptr))
}

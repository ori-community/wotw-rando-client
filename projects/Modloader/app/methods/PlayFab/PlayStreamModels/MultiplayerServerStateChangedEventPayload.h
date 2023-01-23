#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerStateChangedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerStateChangedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerStateChangedEventPayload * this_ptr))
}

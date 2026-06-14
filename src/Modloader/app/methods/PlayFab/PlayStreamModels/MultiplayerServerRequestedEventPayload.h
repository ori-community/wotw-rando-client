#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerRequestedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerRequestedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MultiplayerServerRequestedEventPayload* this_ptr)
}

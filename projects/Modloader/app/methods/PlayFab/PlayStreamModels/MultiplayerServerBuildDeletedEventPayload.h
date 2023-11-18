#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerBuildDeletedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerBuildDeletedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerBuildDeletedEventPayload * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerGameAssetDeletedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerGameAssetDeletedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerGameAssetDeletedEventPayload * this_ptr))
}

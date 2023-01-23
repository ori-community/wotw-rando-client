#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerBuildRegionUpdatedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerBuildRegionUpdatedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerBuildRegionUpdatedEventPayload * this_ptr))
}

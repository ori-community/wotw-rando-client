#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerBuildRegionStatusChangedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerBuildRegionStatusChangedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerBuildRegionStatusChangedEventPayload * this_ptr))
}

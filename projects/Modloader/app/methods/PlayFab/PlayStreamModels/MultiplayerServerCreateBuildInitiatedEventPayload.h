#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerCreateBuildInitiatedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerCreateBuildInitiatedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MultiplayerServerCreateBuildInitiatedEventPayload* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerVmUnassignmentStartedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerVmUnassignmentStartedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerVmUnassignmentStartedEventPayload * this_ptr))
}

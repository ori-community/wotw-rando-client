#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerVmUnhealthyEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerVmUnhealthyEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerVmUnhealthyEventPayload * this_ptr))
}

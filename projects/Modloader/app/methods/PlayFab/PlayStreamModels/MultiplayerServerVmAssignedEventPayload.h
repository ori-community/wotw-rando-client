#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerVmAssignedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerVmAssignedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerVmAssignedEventPayload * this_ptr))
}

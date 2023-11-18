#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplayerServerVmRemoteUserCreatedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerVmRemoteUserCreatedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerVmRemoteUserCreatedEventPayload * this_ptr))
}

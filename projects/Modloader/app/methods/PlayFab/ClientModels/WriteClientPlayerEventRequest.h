#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>

namespace app::classes::PlayFab::ClientModels::WriteClientPlayerEventRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WriteClientPlayerEventRequest * this_ptr))
}

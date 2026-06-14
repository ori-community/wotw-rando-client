#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerSegmentsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerSegmentsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerSegmentsRequest* this_ptr)
}

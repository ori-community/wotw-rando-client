#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerStatisticVersionsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerStatisticVersionsRequest * this_ptr))
}

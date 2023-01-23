#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>

namespace app::classes::PlayFab::ServerModels::GetPlayersSegmentsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayersSegmentsRequest * this_ptr))
}

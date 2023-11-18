#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerProfileRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerProfileRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerProfileRequest_1 * this_ptr))
}

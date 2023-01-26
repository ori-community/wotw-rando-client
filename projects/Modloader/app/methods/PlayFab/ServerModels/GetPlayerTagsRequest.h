#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTagsRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerTagsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerTagsRequest_1 * this_ptr))
}

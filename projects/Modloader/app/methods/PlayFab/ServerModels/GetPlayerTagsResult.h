#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTagsResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetPlayerTagsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerTagsResult_1 * this_ptr))
}

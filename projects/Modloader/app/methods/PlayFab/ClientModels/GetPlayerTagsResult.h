#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerTagsResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerTagsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetPlayerTagsResult * this_ptr))
}

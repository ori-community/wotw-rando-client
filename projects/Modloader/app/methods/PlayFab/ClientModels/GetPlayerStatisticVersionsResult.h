#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerStatisticVersionsResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerStatisticVersionsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerStatisticVersionsResult* this_ptr)
}

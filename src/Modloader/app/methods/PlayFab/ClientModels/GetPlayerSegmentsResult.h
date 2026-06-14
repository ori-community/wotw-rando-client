#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerSegmentsResult.h>

namespace app::classes::PlayFab::ClientModels::GetPlayerSegmentsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetPlayerSegmentsResult* this_ptr)
}

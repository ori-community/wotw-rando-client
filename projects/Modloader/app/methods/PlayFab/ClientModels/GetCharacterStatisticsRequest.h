#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetCharacterStatisticsRequest* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdateCharacterStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateCharacterStatisticsRequest * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterStatisticsRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetCharacterStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterStatisticsRequest_1 * this_ptr))
}

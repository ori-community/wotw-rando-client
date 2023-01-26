#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateCharacterStatisticsRequest_1.h>

namespace app::classes::PlayFab::ServerModels::UpdateCharacterStatisticsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateCharacterStatisticsRequest_1 * this_ptr))
}

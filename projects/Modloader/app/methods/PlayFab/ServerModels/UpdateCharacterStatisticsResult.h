#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateCharacterStatisticsResult_1.h>

namespace app::classes::PlayFab::ServerModels::UpdateCharacterStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateCharacterStatisticsResult_1 * this_ptr))
}

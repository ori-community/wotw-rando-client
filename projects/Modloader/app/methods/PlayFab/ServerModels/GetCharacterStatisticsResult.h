#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterStatisticsResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetCharacterStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterStatisticsResult_1 * this_ptr))
}

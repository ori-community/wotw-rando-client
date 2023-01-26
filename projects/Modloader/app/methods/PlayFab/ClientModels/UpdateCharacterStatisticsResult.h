#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateCharacterStatisticsResult.h>

namespace app::classes::PlayFab::ClientModels::UpdateCharacterStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UpdateCharacterStatisticsResult * this_ptr))
}

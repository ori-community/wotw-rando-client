#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterStatisticsResult.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterStatisticsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetCharacterStatisticsResult* this_ptr)
}

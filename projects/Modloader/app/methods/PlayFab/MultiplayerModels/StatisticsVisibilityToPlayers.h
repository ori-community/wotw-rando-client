#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StatisticsVisibilityToPlayers.h>

namespace app::classes::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StatisticsVisibilityToPlayers* this_ptr)
}

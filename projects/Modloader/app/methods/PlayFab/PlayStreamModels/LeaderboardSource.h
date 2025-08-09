#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderboardSource.h>

namespace app::classes::PlayFab::PlayStreamModels::LeaderboardSource {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaderboardSource* this_ptr)
}

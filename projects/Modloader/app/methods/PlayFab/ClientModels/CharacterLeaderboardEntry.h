#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterLeaderboardEntry.h>

namespace app::classes::PlayFab::ClientModels::CharacterLeaderboardEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterLeaderboardEntry* this_ptr)
}

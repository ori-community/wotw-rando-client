#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerJoinedLobbyEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerJoinedLobbyEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerJoinedLobbyEventData* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableMultiplayerServersForTitleResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnableMultiplayerServersForTitleResponse * this_ptr))
}

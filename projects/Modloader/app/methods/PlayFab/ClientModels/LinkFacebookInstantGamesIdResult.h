#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkFacebookInstantGamesIdResult.h>

namespace app::classes::PlayFab::ClientModels::LinkFacebookInstantGamesIdResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkFacebookInstantGamesIdResult * this_ptr))
}

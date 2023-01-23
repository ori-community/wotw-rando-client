#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchmakeResult.h>

namespace app::classes::PlayFab::ClientModels::MatchmakeResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakeResult * this_ptr))
}

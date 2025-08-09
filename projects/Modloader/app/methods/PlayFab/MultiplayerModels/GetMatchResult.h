#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMatchResult.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMatchResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetMatchResult* this_ptr)
}

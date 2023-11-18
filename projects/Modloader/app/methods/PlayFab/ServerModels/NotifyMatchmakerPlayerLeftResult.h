#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult.h>

namespace app::classes::PlayFab::ServerModels::NotifyMatchmakerPlayerLeftResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotifyMatchmakerPlayerLeftResult * this_ptr))
}

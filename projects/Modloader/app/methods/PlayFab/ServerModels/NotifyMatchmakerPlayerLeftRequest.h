#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest.h>

namespace app::classes::PlayFab::ServerModels::NotifyMatchmakerPlayerLeftRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NotifyMatchmakerPlayerLeftRequest* this_ptr)
}

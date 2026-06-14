#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserBansRequest.h>

namespace app::classes::PlayFab::ServerModels::GetUserBansRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetUserBansRequest* this_ptr)
}

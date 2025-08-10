#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RevokeAllBansForUserRequest.h>

namespace app::classes::PlayFab::ServerModels::RevokeAllBansForUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RevokeAllBansForUserRequest* this_ptr)
}

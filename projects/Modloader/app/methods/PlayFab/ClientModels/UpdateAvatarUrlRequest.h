#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateAvatarUrlRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdateAvatarUrlRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateAvatarUrlRequest* this_ptr)
}

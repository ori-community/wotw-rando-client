#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetTitlePublicKeyRequest.h>

namespace app::classes::PlayFab::ClientModels::GetTitlePublicKeyRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetTitlePublicKeyRequest* this_ptr)
}

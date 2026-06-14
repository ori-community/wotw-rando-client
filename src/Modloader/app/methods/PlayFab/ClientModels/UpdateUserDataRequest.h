#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateUserDataRequest.h>

namespace app::classes::PlayFab::ClientModels::UpdateUserDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_PlayFabId, app::UpdateUserDataRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_PlayFabId, app::UpdateUserDataRequest* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UpdateUserDataRequest* this_ptr)
} // namespace app::classes::PlayFab::ClientModels::UpdateUserDataRequest

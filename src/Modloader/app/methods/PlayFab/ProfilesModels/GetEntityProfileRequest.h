#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetEntityProfileRequest.h>

namespace app::classes::PlayFab::ProfilesModels::GetEntityProfileRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetEntityProfileRequest* this_ptr)
}

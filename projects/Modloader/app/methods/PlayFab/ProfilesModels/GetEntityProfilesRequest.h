#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetEntityProfilesRequest.h>

namespace app::classes::PlayFab::ProfilesModels::GetEntityProfilesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetEntityProfilesRequest* this_ptr)
}

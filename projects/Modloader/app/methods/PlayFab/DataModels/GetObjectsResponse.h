#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetObjectsResponse.h>

namespace app::classes::PlayFab::DataModels::GetObjectsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetObjectsResponse* this_ptr)
}

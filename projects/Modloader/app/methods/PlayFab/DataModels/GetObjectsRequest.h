#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetObjectsRequest.h>

namespace app::classes::PlayFab::DataModels::GetObjectsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetObjectsRequest * this_ptr))
}

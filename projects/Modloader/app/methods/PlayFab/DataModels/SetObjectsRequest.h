#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetObjectsRequest.h>

namespace app::classes::PlayFab::DataModels::SetObjectsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetObjectsRequest* this_ptr)
}

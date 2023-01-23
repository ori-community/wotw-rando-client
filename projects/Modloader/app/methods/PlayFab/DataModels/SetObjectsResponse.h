#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetObjectsResponse.h>

namespace app::classes::PlayFab::DataModels::SetObjectsResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetObjectsResponse * this_ptr))
}

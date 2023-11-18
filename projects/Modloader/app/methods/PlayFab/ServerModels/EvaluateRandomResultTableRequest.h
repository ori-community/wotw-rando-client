#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EvaluateRandomResultTableRequest.h>

namespace app::classes::PlayFab::ServerModels::EvaluateRandomResultTableRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EvaluateRandomResultTableRequest * this_ptr))
}

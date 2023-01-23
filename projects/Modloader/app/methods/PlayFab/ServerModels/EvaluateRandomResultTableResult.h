#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EvaluateRandomResultTableResult.h>

namespace app::classes::PlayFab::ServerModels::EvaluateRandomResultTableResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EvaluateRandomResultTableResult * this_ptr))
}

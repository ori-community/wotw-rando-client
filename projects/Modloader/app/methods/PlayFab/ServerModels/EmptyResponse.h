#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmptyResponse_3.h>

namespace app::classes::PlayFab::ServerModels::EmptyResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmptyResponse_3 * this_ptr))
}

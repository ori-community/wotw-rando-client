#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityTokenResponse_1.h>

namespace app::classes::PlayFab::ServerModels::EntityTokenResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityTokenResponse_1 * this_ptr))
}

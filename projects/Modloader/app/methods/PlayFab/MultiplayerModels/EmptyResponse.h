#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmptyResponse_2.h>

namespace app::classes::PlayFab::MultiplayerModels::EmptyResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EmptyResponse_2* this_ptr)
}

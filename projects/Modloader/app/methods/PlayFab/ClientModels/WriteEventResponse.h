#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteEventResponse.h>

namespace app::classes::PlayFab::ClientModels::WriteEventResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WriteEventResponse* this_ptr)
}

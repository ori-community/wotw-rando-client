#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>

namespace app::classes::PlayFab::ServerModels::WriteServerCharacterEventRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WriteServerCharacterEventRequest* this_ptr)
}

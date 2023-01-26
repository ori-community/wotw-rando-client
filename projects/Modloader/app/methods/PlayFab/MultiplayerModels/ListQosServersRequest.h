#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListQosServersRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListQosServersRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListQosServersRequest * this_ptr))
}

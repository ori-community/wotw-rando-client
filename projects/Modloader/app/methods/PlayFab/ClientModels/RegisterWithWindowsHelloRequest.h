#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegisterWithWindowsHelloRequest.h>

namespace app::classes::PlayFab::ClientModels::RegisterWithWindowsHelloRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RegisterWithWindowsHelloRequest * this_ptr))
}

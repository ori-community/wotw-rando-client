#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeInstallRequest.h>

namespace app::classes::PlayFab::ClientModels::AttributeInstallRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttributeInstallRequest * this_ptr))
}

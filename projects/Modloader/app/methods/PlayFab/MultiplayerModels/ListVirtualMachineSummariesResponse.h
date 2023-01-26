#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListVirtualMachineSummariesResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListVirtualMachineSummariesResponse * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListVirtualMachineSummariesRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListVirtualMachineSummariesRequest * this_ptr))
}

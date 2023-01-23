#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkGameCenterAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkGameCenterAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkGameCenterAccountResult * this_ptr))
}

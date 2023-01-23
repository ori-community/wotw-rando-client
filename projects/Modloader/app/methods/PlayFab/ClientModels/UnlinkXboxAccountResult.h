#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkXboxAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkXboxAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkXboxAccountResult * this_ptr))
}

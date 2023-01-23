#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkGoogleAccountResult.h>

namespace app::classes::PlayFab::ClientModels::UnlinkGoogleAccountResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkGoogleAccountResult * this_ptr))
}

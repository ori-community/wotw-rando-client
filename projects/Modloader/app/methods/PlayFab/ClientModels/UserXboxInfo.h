#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserXboxInfo.h>

namespace app::classes::PlayFab::ClientModels::UserXboxInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserXboxInfo * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserOpenIdInfo.h>

namespace app::classes::PlayFab::ClientModels::UserOpenIdInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserOpenIdInfo * this_ptr))
}

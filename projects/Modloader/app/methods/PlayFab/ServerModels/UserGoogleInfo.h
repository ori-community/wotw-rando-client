#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserGoogleInfo_1.h>

namespace app::classes::PlayFab::ServerModels::UserGoogleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserGoogleInfo_1 * this_ptr))
}

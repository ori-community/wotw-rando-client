#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UserGoogleInfo.h>

namespace app::classes::PlayFab::ClientModels::UserGoogleInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UserGoogleInfo * this_ptr))
}

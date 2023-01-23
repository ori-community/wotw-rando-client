#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AuthTokenValidatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::AuthTokenValidatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AuthTokenValidatedEventData * this_ptr))
}

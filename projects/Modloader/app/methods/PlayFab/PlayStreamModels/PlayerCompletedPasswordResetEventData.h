#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerCompletedPasswordResetEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerCompletedPasswordResetEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerCompletedPasswordResetEventData * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerLoggedInEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerLoggedInEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLoggedInEventData * this_ptr))
}

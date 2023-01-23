#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerSetProfilePropertyEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerSetProfilePropertyEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerSetProfilePropertyEventData * this_ptr))
}

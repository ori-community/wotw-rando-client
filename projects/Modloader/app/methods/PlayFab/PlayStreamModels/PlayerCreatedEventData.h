#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerCreatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerCreatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerCreatedEventData * this_ptr))
}

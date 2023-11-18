#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerAddedTitleEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerAddedTitleEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerAddedTitleEventData * this_ptr))
}

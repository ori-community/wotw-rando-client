#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerRemovedTitleEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerRemovedTitleEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerRemovedTitleEventData * this_ptr))
}

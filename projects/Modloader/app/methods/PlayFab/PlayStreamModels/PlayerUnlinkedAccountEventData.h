#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUnlinkedAccountEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerUnlinkedAccountEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerUnlinkedAccountEventData* this_ptr)
}

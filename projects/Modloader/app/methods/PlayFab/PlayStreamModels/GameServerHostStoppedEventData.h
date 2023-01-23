#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameServerHostStoppedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::GameServerHostStoppedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameServerHostStoppedEventData * this_ptr))
}

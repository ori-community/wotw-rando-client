#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerActionExecutedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerActionExecutedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerActionExecutedEventData * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerExecutedCloudScriptEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerExecutedCloudScriptEventData * this_ptr))
}

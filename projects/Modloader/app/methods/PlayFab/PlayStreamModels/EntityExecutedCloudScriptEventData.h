#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityExecutedCloudScriptEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::EntityExecutedCloudScriptEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityExecutedCloudScriptEventData * this_ptr))
}

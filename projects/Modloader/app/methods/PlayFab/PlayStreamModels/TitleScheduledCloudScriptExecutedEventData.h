#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleScheduledCloudScriptExecutedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleScheduledCloudScriptExecutedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleScheduledCloudScriptExecutedEventData * this_ptr))
}

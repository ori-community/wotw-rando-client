#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerDataExportedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerDataExportedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerDataExportedEventData* this_ptr)
}

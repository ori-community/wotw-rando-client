#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleAPISettingsChangedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleAPISettingsChangedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleAPISettingsChangedEventData* this_ptr)
}

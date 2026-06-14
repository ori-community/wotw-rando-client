#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleHighErrorRateEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleHighErrorRateEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleHighErrorRateEventData* this_ptr)
}

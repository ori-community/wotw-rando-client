#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TenacyConnectorOnboardEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TenacyConnectorOnboardEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TenacyConnectorOnboardEventData* this_ptr)
}

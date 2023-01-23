#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StudioUserInvitedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::StudioUserInvitedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StudioUserInvitedEventData * this_ptr))
}

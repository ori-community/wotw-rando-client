#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerPasswordResetLinkSentEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerPasswordResetLinkSentEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerPasswordResetLinkSentEventData* this_ptr)
}

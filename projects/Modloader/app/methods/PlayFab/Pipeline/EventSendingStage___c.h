#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventContents.h>
#include <Modloader/app/structs/EventSendingStage_c.h>
#include <Modloader/app/structs/PlayFabEmitEventRequest.h>

namespace app::classes::PlayFab::Pipeline::EventSendingStage___c {
    IL2CPP_REGISTER_METHOD(0x017B0BC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventSendingStage_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B0D00, app::EventContents*, _OnNextInputItem_b__3_0, app::EventSendingStage_c* this_ptr, app::PlayFabEmitEventRequest* x)
} // namespace app::classes::PlayFab::Pipeline::EventSendingStage___c

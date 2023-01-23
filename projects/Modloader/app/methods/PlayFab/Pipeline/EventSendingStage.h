#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventSendingStage.h>
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/TitleEventBatch.h>
#include <Modloader/app/structs/List_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_.h>

namespace app::classes::PlayFab::Pipeline::EventSendingStage {
    IL2CPP_REGISTER_METHOD(0x017AFCF0, void, ctor, (app::EventSendingStage * this_ptr, app::ILogger_1* logger))
    IL2CPP_REGISTER_METHOD(0x017AFE50, void, OnNextInputItem, (app::EventSendingStage * this_ptr, app::TitleEventBatch* batch))
    IL2CPP_REGISTER_METHODINFO(0x0477AC48, EventSendingStage_OnNextInputItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017B0960, void, FulfillPromises, (app::EventSendingStage * this_ptr, app::List_1_PlayFab_IPlayFabEmitEventRequest_* batch, app::PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_* play_fab_result))
} // namespace app::classes::PlayFab::Pipeline::EventSendingStage

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_.h>
#include <Modloader/app/structs/PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1_.h>
#include <Modloader/app/structs/Task_1_PlayFab_SharedModels_PlayFabResult_1__1.h>

namespace app::classes::System::Threading::Tasks::Task_1_PlayFab_SharedModels_PlayFabResult_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02A5A760,
        app::PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_*,
        get_Result_1,
        app::Task_1_PlayFab_SharedModels_PlayFabResult_1__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02A5A760,
        app::PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_*,
        get_Result_2,
        app::Task_1_PlayFab_SharedModels_PlayFabResult_1_* this_ptr
    )
} // namespace app::classes::System::Threading::Tasks::Task_1_PlayFab_SharedModels_PlayFabResult_1_

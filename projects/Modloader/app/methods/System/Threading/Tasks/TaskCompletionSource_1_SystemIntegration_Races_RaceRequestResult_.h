#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceRequestResult.h>
#include <Modloader/app/structs/TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResult_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_ {
    IL2CPP_REGISTER_METHOD(
        0x02777740,
        void,
        SetResult,
        app::TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* this_ptr,
        app::RaceRequestResult* result
    )
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, app::TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::Task_1_SystemIntegration_Races_RaceRequestResult_*,
        get_Task,
        app::TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_* this_ptr
    )
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_

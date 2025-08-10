#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Threading_Tasks_Task_1_.h>
#include <Modloader/app/structs/ILogger_1.h>
#include <Modloader/app/structs/IPlayFabEvent.h>
#include <Modloader/app/structs/IPlayFabEventRouter.h>
#include <Modloader/app/structs/PlayFabEventAPI.h>

namespace app::classes::PlayFab::PlayFabEventAPI {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IPlayFabEventRouter*, get_EventRouter, app::PlayFabEventAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_EventRouter, app::PlayFabEventAPI* this_ptr, app::IPlayFabEventRouter* value)
    IL2CPP_REGISTER_METHOD(0x01A29160, void, ctor, app::PlayFabEventAPI* this_ptr, app::ILogger_1* logger)
    IL2CPP_REGISTER_METHOD(
        0x01A29380,
        app::IEnumerable_1_System_Threading_Tasks_Task_1_*,
        EmitEvent,
        app::PlayFabEventAPI* this_ptr,
        app::IPlayFabEvent* play_fab_event
    )
} // namespace app::classes::PlayFab::PlayFabEventAPI

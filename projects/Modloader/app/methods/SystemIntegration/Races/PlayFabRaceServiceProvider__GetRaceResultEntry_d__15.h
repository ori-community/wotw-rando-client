#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed.h>

namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider__GetRaceResultEntry_d__15 {
    IL2CPP_REGISTER_METHOD(0x001114F0, void, MoveNext, app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00111500,
        void,
        SetStateMachine,
        app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider__GetRaceResultEntry_d__15

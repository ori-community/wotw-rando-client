#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed.h>

namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider__ProcessLeaderBoardList_d__13 {
    IL2CPP_REGISTER_METHOD(0x00111590, void, MoveNext, app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001115A0,
        void,
        SetStateMachine,
        app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider__ProcessLeaderBoardList_d__13

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/OneDSEventsAPI_WaitWhile_d_13__Boxed.h>

namespace app::classes::PlayFab::OneDSEventsAPI__WaitWhile_d__13 {
    IL2CPP_REGISTER_METHOD(0x0014EC50, void, MoveNext, app::OneDSEventsAPI_WaitWhile_d_13__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011DCA0, void, SetStateMachine, app::OneDSEventsAPI_WaitWhile_d_13__Boxed* this_ptr, app::IAsyncStateMachine* state_machine)
} // namespace app::classes::PlayFab::OneDSEventsAPI__WaitWhile_d__13

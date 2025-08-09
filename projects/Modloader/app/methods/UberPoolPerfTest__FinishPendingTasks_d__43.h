#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/UberPoolPerfTest_FinishPendingTasks_d_43__Boxed.h>

namespace app::classes::UberPoolPerfTest__FinishPendingTasks_d__43 {
    IL2CPP_REGISTER_METHOD(0x001238A0, void, MoveNext, app::UberPoolPerfTest_FinishPendingTasks_d_43__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011DCA0,
        void,
        SetStateMachine,
        app::UberPoolPerfTest_FinishPendingTasks_d_43__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::UberPoolPerfTest__FinishPendingTasks_d__43

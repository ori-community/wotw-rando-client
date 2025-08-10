#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed.h>

namespace app::classes::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31 {
    IL2CPP_REGISTER_METHOD(0x001E6A20, void, MoveNext, app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001E6A30,
        void,
        SetStateMachine,
        app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Threading::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__31

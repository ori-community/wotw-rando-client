#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed.h>

namespace app::classes::UberPoolPerfTest__ForcePrefabPrewarmed_d__36 {
    IL2CPP_REGISTER_METHOD(0x001238B0, void, MoveNext, app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011DCA0,
        void,
        SetStateMachine,
        app::UberPoolPerfTest_ForcePrefabPrewarmed_d_36__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::UberPoolPerfTest__ForcePrefabPrewarmed_d__36

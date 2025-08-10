#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/UberPoolPerfTest_LoadPrefabInfos_d_41__Boxed.h>

namespace app::classes::UberPoolPerfTest__LoadPrefabInfos_d__41 {
    IL2CPP_REGISTER_METHOD(0x001238D0, void, MoveNext, app::UberPoolPerfTest_LoadPrefabInfos_d_41__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001238E0,
        void,
        SetStateMachine,
        app::UberPoolPerfTest_LoadPrefabInfos_d_41__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::UberPoolPerfTest__LoadPrefabInfos_d__41

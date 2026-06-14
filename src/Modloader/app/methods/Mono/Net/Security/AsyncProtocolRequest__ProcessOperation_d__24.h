#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncProtocolRequest_ProcessOperation_d_24__Boxed.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>

namespace app::classes::Mono::Net::Security::AsyncProtocolRequest__ProcessOperation_d__24 {
    IL2CPP_REGISTER_METHOD(0x001DCE10, void, MoveNext, app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011DCA0,
        void,
        SetStateMachine,
        app::AsyncProtocolRequest_ProcessOperation_d_24__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::Mono::Net::Security::AsyncProtocolRequest__ProcessOperation_d__24

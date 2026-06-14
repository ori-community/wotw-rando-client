#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_StartOperation_d_58__Boxed.h>

namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__58 {
    IL2CPP_REGISTER_METHOD(0x001DCF80, void, MoveNext, app::MobileAuthenticatedStream_StartOperation_d_58__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001DCF90,
        void,
        SetStateMachine,
        app::MobileAuthenticatedStream_StartOperation_d_58__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream__StartOperation_d__58

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/MobileAuthenticatedStream_InnerWrite_d_67__Boxed.h>

namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67 {
    IL2CPP_REGISTER_METHOD(0x001DCF60, void, MoveNext, app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011DCA0,
        void,
        SetStateMachine,
        app::MobileAuthenticatedStream_InnerWrite_d_67__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::Mono::Net::Security::MobileAuthenticatedStream__InnerWrite_d__67

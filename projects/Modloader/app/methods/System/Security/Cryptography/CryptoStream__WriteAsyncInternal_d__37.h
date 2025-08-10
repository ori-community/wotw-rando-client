#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CryptoStream_WriteAsyncInternal_d_37__Boxed.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>

namespace app::classes::System::Security::Cryptography::CryptoStream__WriteAsyncInternal_d__37 {
    IL2CPP_REGISTER_METHOD(0x001DC1F0, void, MoveNext, app::CryptoStream_WriteAsyncInternal_d_37__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011DCA0,
        void,
        SetStateMachine,
        app::CryptoStream_WriteAsyncInternal_d_37__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::System::Security::Cryptography::CryptoStream__WriteAsyncInternal_d__37

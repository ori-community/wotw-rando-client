#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable.h>
#include <Modloader/app/structs/CryptoStream_HopToThreadPoolAwaitable__Boxed.h>

namespace app::classes::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable {
    IL2CPP_REGISTER_METHOD(0x0010E100, app::CryptoStream_HopToThreadPoolAwaitable, GetAwaiter, app::CryptoStream_HopToThreadPoolAwaitable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0018F210, bool, get_IsCompleted, app::CryptoStream_HopToThreadPoolAwaitable__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DC200, void, OnCompleted, app::CryptoStream_HopToThreadPoolAwaitable__Boxed* this_ptr, app::Action* continuation)
    IL2CPP_REGISTER_METHOD(0x00002890, void, GetResult, app::CryptoStream_HopToThreadPoolAwaitable__Boxed* this_ptr)
} // namespace app::classes::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable

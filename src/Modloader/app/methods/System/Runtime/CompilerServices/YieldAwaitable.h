#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/YieldAwaitable_YieldAwaiter.h>
#include <Modloader/app/structs/YieldAwaitable__Boxed.h>

namespace app::classes::System::Runtime::CompilerServices::YieldAwaitable {
    IL2CPP_REGISTER_METHOD(0x0018F210, app::YieldAwaitable_YieldAwaiter, GetAwaiter, app::YieldAwaitable__Boxed* this_ptr)
}

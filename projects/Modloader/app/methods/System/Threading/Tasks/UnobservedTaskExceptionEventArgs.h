#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs.h>
#include <Modloader/app/structs/AggregateException.h>

namespace app::classes::System::Threading::Tasks::UnobservedTaskExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x023416F0, void, ctor, (app::UnobservedTaskExceptionEventArgs * this_ptr, app::AggregateException* exception))
}

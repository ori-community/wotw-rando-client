#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::UnobservedTaskExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x023416F0, void, ctor, (app::UnobservedTaskExceptionEventArgs * this_ptr, app::AggregateException* exception))
}

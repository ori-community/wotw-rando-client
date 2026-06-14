#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Task_DelayPromise.h>

namespace app::classes::System::Threading::Tasks::Task_DelayPromise {
    IL2CPP_REGISTER_METHOD(0x0233B230, void, ctor, app::Task_DelayPromise* this_ptr, app::CancellationToken token)
    IL2CPP_REGISTER_METHOD(0x0233B3C0, void, Complete, app::Task_DelayPromise* this_ptr)
} // namespace app::classes::System::Threading::Tasks::Task_DelayPromise

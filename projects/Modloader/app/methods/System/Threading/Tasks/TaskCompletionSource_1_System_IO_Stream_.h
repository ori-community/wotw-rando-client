#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskCompletionSource_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>

namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_IO_Stream_ {
    IL2CPP_REGISTER_METHOD(0x02776D20, void, ctor, (app::TaskCompletionSource_1_System_IO_Stream_ * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Task_1_System_IO_Stream_*, get_Task, (app::TaskCompletionSource_1_System_IO_Stream_ * this_ptr))
} // namespace app::classes::System::Threading::Tasks::TaskCompletionSource_1_System_IO_Stream_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskCanceledException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Threading::Tasks::TaskCanceledException {
    IL2CPP_REGISTER_METHOD(0x0233BE40, void, ctor_1, (app::TaskCanceledException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233BED0, void, ctor_2, (app::TaskCanceledException * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::TaskCanceledException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Threading::Tasks::TaskCanceledException

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ITask.h>

namespace app::classes::TaskUtilities {
    IL2CPP_REGISTER_METHOD(0x03014410, bool, IsTaskRunningOrBlocking, (app::ITask * task))
    IL2CPP_REGISTER_METHOD(0x030144C0, bool, IsRunningOrBlocking, (app::ITask * task))
} // namespace app::classes::TaskUtilities

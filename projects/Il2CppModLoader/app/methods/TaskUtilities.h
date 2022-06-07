#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TaskUtilities {
    IL2CPP_REGISTER_METHOD(0x03014410, bool, IsTaskRunningOrBlocking, (app::ITask * task))
    IL2CPP_REGISTER_METHOD(0x030144C0, bool, IsRunningOrBlocking, (app::ITask * task))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StressTestActionHandler.h>

namespace app::classes::StressTestActionHandler {
    IL2CPP_REGISTER_METHOD(0x0065D5D0, void, Start, app::StressTestActionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065D680, void, LateUpdate, app::StressTestActionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065D8D0, void, OnDestroy, app::StressTestActionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065DB20, void, OnTestReady, app::StressTestActionHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::StressTestActionHandler* this_ptr)
} // namespace app::classes::StressTestActionHandler

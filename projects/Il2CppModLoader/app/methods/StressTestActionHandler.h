#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StressTestActionHandler {
    IL2CPP_REGISTER_METHOD(0x0065D5D0, void, Start, (app::StressTestActionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065D680, void, LateUpdate, (app::StressTestActionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065D8D0, void, OnDestroy, (app::StressTestActionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065DB20, void, OnTestReady, (app::StressTestActionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E6D0, StressTestActionHandler_OnTestReady__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StressTestActionHandler * this_ptr))
}

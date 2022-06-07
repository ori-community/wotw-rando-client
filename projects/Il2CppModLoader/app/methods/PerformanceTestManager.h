#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PerformanceTestManager {
    IL2CPP_REGISTER_METHOD(0x00498250, void, ChangeState, (app::PerformanceTestManager * this_ptr, app::PerformanceTestManager_State__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x0476C3B8, PerformanceTestManager_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00498690, void, Awake, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00498C70, void, Update, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00498CE0, void, OnApplicationQuit, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00498D10, bool, ShouldRunReplayAgain, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C388, PerformanceTestManager_ShouldRunReplayAgain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00498E50, void, FlushAllPerformanceResults, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499060, void, WriteSomePerformanceResults, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00499200, void, OnFinishedReplay, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743DB8, PerformanceTestManager_OnFinishedReplay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00499380, void, OnGoodPerformance, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707838, PerformanceTestManager_OnGoodPerformance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00499380, void, OnNotMonitoringPerformance, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AE60, PerformanceTestManager_OnNotMonitoringPerformance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00499390, void, DebugLog, (app::PerformanceTestManager * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PerformanceTestManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}

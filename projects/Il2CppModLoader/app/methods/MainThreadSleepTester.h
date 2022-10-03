#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MainThreadSleepTester {
    IL2CPP_REGISTER_METHOD(0x009F6320, bool, get_SpleepEnabled, ())
    IL2CPP_REGISTER_METHOD(0x009F63C0, void, set_SpleepEnabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x009F65B0, void, CreateInstance, ())
    IL2CPP_REGISTER_METHOD(0x009F67F0, app::GUIStyle*, get_LabelStyle, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F6B60, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x009F6CC0, void, Awake, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F6E70, void, OnDestroy, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F6FB0, void, EnableSleep, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F7180, void, DisableSleep, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F7350, void, OnEndOfFrame, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F510, MainThreadSleepTester_OnEndOfFrame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F7400, void, OnGUI, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F75E0, void, ctor, (app::MainThreadSleepTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F7670, void, cctor, ())
} // namespace app::classes::MainThreadSleepTester

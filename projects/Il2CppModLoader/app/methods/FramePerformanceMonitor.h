#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FramePerformanceMonitor {
    IL2CPP_REGISTER_METHOD(0x016409B0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x01640A60, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x01640CF0, void, BeginSample, (app::String * label))
    IL2CPP_REGISTER_METHOD(0x01640FB0, void, EndSample, ())
    IL2CPP_REGISTER_METHOD(0x01641110, void, Awake, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016411C0, void, OnEnable, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016413A0, void, OnDestroy, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016414F0, void, Update, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01641930, void, Flush, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01641D80, void, CloseWriter, (app::FramePerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01641E20, void, ctor, (app::FramePerformanceMonitor * this_ptr))
}

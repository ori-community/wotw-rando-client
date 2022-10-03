#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RecorderTester {
    IL2CPP_REGISTER_METHOD(0x008F9B70, void, Awake, (app::RecorderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9BA0, void, OnDestroy, (app::RecorderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9BB0, void, Update, (app::RecorderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9C70, void, StartRecording, (app::RecorderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FA0E0, void, EndRecording, (app::RecorderTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecorderTester * this_ptr))
} // namespace app::classes::RecorderTester

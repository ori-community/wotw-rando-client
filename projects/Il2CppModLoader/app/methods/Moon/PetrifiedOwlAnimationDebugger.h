#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PetrifiedOwlAnimationDebugger {
    IL2CPP_REGISTER_METHOD(0x00C33510, void, OnEnable, (app::PetrifiedOwlAnimationDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C335A0, void, OnDisable, (app::PetrifiedOwlAnimationDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33630, void, Start, (app::PetrifiedOwlAnimationDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33690, void, OnGUI, (app::PetrifiedOwlAnimationDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C339F0, void, StartIdle, (app::PetrifiedOwlAnimationDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C33A40, void, ctor, (app::PetrifiedOwlAnimationDebugger * this_ptr))
}

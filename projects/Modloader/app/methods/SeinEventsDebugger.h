#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinEventsDebugger {
    IL2CPP_REGISTER_METHOD(0x00AD3930, void, Awake, (app::SeinEventsDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD3D00, void, OnGUI, (app::SeinEventsDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::SeinEventsDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4660, void, ctor, (app::SeinEventsDebugger * this_ptr))
} // namespace app::classes::SeinEventsDebugger

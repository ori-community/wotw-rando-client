#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEventsDebugger_c.h>
#include <Modloader/app/structs/SeinEventsDebugger_Entry.h>

namespace app::classes::SeinEventsDebugger___c {
    IL2CPP_REGISTER_METHOD(0x00AD47E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinEventsDebugger_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD4920, int64_t, _OnGUI_b__5_0, (app::SeinEventsDebugger_c * this_ptr, app::SeinEventsDebugger_Entry* v))
} // namespace app::classes::SeinEventsDebugger___c

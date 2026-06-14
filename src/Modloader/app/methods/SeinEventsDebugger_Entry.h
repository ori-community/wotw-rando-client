#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEventsDebugger_Entry.h>

namespace app::classes::SeinEventsDebugger_Entry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SeinEventsDebugger_Entry* this_ptr)
}

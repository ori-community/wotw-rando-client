#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_SeinEvent_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/SeinEvent__Enum.h>
#include <Modloader/app/structs/SeinEventsDebugger_Entry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ * this_ptr, app::SeinEvent__Enum key, app::SeinEventsDebugger_Entry** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ * this_ptr, app::SeinEvent__Enum key, app::SeinEventsDebugger_Entry* value))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::SeinEventsDebugger_Entry*, get_Item, (app::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ * this_ptr, app::SeinEvent__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_SeinEvent_SeinEventsDebugger_Entry_*, get_Values, (app::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_

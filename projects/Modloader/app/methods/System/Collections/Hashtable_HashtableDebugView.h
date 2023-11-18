#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Hashtable_HashtableDebugView.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/KeyValuePairs__Array.h>

namespace app::classes::System::Collections::Hashtable_HashtableDebugView {
    IL2CPP_REGISTER_METHOD(0x02026FE0, void, ctor, (app::Hashtable_HashtableDebugView * this_ptr, app::Hashtable* hashtable))
    IL2CPP_REGISTER_METHOD(0x017173C0, app::KeyValuePairs__Array*, get_Items, (app::Hashtable_HashtableDebugView * this_ptr))
} // namespace app::classes::System::Collections::Hashtable_HashtableDebugView

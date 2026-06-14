#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionaryDebugView_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>

namespace app::classes::System::Collections::Concurrent::IDictionaryDebugView_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0162AB30,
        app::KeyValuePair_2_System_Object_System_Object___Array*,
        get_Items,
        app::IDictionaryDebugView_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02F28FC0,
        void,
        ctor,
        app::IDictionaryDebugView_2_System_Object_System_Object_* this_ptr,
        app::IDictionary_2_System_Object_System_Object_* dictionary
    )
} // namespace app::classes::System::Collections::Concurrent::IDictionaryDebugView_2_System_Object_System_Object_

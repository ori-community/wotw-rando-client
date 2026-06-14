#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionaryDebugView_2_System_Object_System_Object__1.h>
#include <Modloader/app/structs/IDictionaryDebugView_2_System_Object_System_Object__2.h>
#include <Modloader/app/structs/IDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>

namespace app::classes::System::Collections::Generic::IDictionaryDebugView_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0162AB30,
        app::KeyValuePair_2_System_Object_System_Object___Array*,
        get_Items_1,
        app::IDictionaryDebugView_2_System_Object_System_Object__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x03018DB0,
        void,
        ctor_1,
        app::IDictionaryDebugView_2_System_Object_System_Object__1* this_ptr,
        app::IDictionary_2_System_Object_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x0162AB30,
        app::KeyValuePair_2_System_Object_System_Object___Array*,
        get_Items_2,
        app::IDictionaryDebugView_2_System_Object_System_Object__2* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x03018CE0,
        void,
        ctor_2,
        app::IDictionaryDebugView_2_System_Object_System_Object__2* this_ptr,
        app::IDictionary_2_System_Object_System_Object_* dictionary
    )
} // namespace app::classes::System::Collections::Generic::IDictionaryDebugView_2_System_Object_System_Object_

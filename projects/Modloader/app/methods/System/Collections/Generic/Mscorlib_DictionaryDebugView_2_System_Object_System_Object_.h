#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/Mscorlib_DictionaryDebugView_2_System_Object_System_Object_.h>

namespace app::classes::System::Collections::Generic::Mscorlib_DictionaryDebugView_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x0162AB30,
        app::KeyValuePair_2_System_Object_System_Object___Array*,
        get_Items,
        app::Mscorlib_DictionaryDebugView_2_System_Object_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C28DB0,
        void,
        ctor,
        app::Mscorlib_DictionaryDebugView_2_System_Object_System_Object_* this_ptr,
        app::IDictionary_2_System_Object_System_Object_* dictionary
    )
} // namespace app::classes::System::Collections::Generic::Mscorlib_DictionaryDebugView_2_System_Object_System_Object_

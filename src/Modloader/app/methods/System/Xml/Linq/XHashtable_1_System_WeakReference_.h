#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WeakReference.h>
#include <Modloader/app/structs/XHashtable_1_System_WeakReference_.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_System_WeakReference_.h>

namespace app::classes::System::Xml::Linq::XHashtable_1_System_WeakReference_ {
    IL2CPP_REGISTER_METHOD(
        0x0225AE80,
        void,
        ctor,
        app::XHashtable_1_System_WeakReference_* this_ptr,
        app::XHashtable_1_TValue_ExtractKeyDelegate_System_WeakReference_* extract_key,
        int32_t capacity
    )
    IL2CPP_REGISTER_METHOD(
        0x0225AFC0,
        bool,
        TryGetValue,
        app::XHashtable_1_System_WeakReference_* this_ptr,
        app::String* key,
        int32_t index,
        int32_t count,
        app::WeakReference** value
    )
    IL2CPP_REGISTER_METHOD(0x0225B000, app::WeakReference*, Add, app::XHashtable_1_System_WeakReference_* this_ptr, app::WeakReference* value)
} // namespace app::classes::System::Xml::Linq::XHashtable_1_System_WeakReference_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XHashtable_1_TValue_ExtractKeyDelegate_System_Object_.h>

namespace app::classes::System::Xml::Linq::XHashtable_1_TValue__ExtractKeyDelegate_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x014347E0, app::String*, Invoke, app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* this_ptr,
        app::Object* value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, app::String*, EndInvoke, app::XHashtable_1_TValue_ExtractKeyDelegate_System_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Xml::Linq::XHashtable_1_TValue__ExtractKeyDelegate_System_Object_

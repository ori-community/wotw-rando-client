#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Collections_DictionaryEntry_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_System_Collections_DictionaryEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_System_Collections_DictionaryEntry_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, app::Action_1_System_Collections_DictionaryEntry_* this_ptr, app::DictionaryEntry obj)
    IL2CPP_REGISTER_METHOD(
        0x02A04AB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_System_Collections_DictionaryEntry_* this_ptr,
        app::DictionaryEntry obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_1_System_Collections_DictionaryEntry_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_1_System_Collections_DictionaryEntry_

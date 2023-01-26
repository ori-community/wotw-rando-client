#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_System_Collections_DictionaryEntry_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_System_Collections_DictionaryEntry_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_System_Collections_DictionaryEntry_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Func_2_System_Collections_DictionaryEntry_Boolean_ * this_ptr, app::DictionaryEntry arg))
    IL2CPP_REGISTER_METHOD(0x02F9DD00, app::IAsyncResult*, BeginInvoke, (app::Func_2_System_Collections_DictionaryEntry_Boolean_ * this_ptr, app::DictionaryEntry arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_System_Collections_DictionaryEntry_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_System_Collections_DictionaryEntry_Boolean_

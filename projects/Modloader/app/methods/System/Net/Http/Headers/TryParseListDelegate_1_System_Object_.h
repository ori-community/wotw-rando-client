#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TryParseListDelegate_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::Http::Headers::TryParseListDelegate_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0254DDD0, bool, Invoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::String* value, int32_t minimal_count, app::List_1_System_Object_** result))
    IL2CPP_REGISTER_METHOD(0x0254E350, app::IAsyncResult*, BeginInvoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::String* value, int32_t minimal_count, app::List_1_System_Object_** result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::List_1_System_Object_** result, app::IAsyncResult* __result))
} // namespace app::classes::System::Net::Http::Headers::TryParseListDelegate_1_System_Object_

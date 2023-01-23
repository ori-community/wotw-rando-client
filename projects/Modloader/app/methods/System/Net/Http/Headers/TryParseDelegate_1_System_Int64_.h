#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TryParseDelegate_1_System_Int64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::Http::Headers::TryParseDelegate_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TryParseDelegate_1_System_Int64_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04741D08, TryParseDelegate_1_System_Int64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::TryParseDelegate_1_System_Int64_ * this_ptr, app::String* value, int64_t* result))
    IL2CPP_REGISTER_METHOD(0x0254DC10, app::IAsyncResult*, BeginInvoke, (app::TryParseDelegate_1_System_Int64_ * this_ptr, app::String* value, int64_t* result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::TryParseDelegate_1_System_Int64_ * this_ptr, int64_t* result, app::IAsyncResult* __result))
} // namespace app::classes::System::Net::Http::Headers::TryParseDelegate_1_System_Int64_

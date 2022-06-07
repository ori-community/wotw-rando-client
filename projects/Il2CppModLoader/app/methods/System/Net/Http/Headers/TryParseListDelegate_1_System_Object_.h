#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::TryParseListDelegate_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0254DDD0, bool, Invoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::String * value, int32_t minimal_count, app::List_1_System_Object_ * * result))
    IL2CPP_REGISTER_METHOD(0x0254E350, app::IAsyncResult *, BeginInvoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::String * value, int32_t minimal_count, app::List_1_System_Object_ * * result, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::TryParseListDelegate_1_System_Object_ * this_ptr, app::List_1_System_Object_ * * result, app::IAsyncResult * __result))
}

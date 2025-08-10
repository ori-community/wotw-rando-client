#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Func_2_DateTime_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Func_2_DateTime_String_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_DateTime_String_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02B34D70, app::String*, Invoke, app::Func_2_DateTime_String_* this_ptr, app::DateTime arg)
} // namespace app::classes::System::Func_2_DateTime_String_

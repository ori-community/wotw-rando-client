#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsOption_1_System_Object___Boxed.h>

namespace app::classes::FullSerializer::Internal::fsOption_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0010E100, bool, get_HasValue, app::fsOption_1_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsEmpty, app::fsOption_1_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00154210, app::Object*, get_Value, app::fsOption_1_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001542E0, void, ctor, app::fsOption_1_System_Object___Boxed* this_ptr, app::Object* value)
} // namespace app::classes::FullSerializer::Internal::fsOption_1_System_Object_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NamedValues_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::NamedValues_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02722360, app::String*, GetName, (app::NamedValues_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::NamedValues_1_System_Object_ * this_ptr))
} // namespace app::classes::Moon::NamedValues_1_System_Object_

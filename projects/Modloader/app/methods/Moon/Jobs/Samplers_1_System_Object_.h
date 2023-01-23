#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Samplers_1_System_Object_.h>

namespace app::classes::Moon::Jobs::Samplers_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02720030, app::String*, get_className, ())
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Samplers_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02720110, void, cctor, ())
} // namespace app::classes::Moon::Jobs::Samplers_1_System_Object_

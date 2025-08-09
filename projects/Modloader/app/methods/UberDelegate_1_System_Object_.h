#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/UberDelegate_1_System_Object_.h>

namespace app::classes::UberDelegate_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0225C3E0, void, Clear, app::UberDelegate_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225C400, void, Add, app::UberDelegate_1_System_Object_* this_ptr, app::Action_1_Object_* act)
    IL2CPP_REGISTER_METHOD(0x0225C550, void, Print, app::UberDelegate_1_System_Object_* this_ptr, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x0225C810, void, Call, app::UberDelegate_1_System_Object_* this_ptr, app::Object* act)
    IL2CPP_REGISTER_METHOD(0x0225C9B0, void, Remove, app::UberDelegate_1_System_Object_* this_ptr, app::Action_1_Object_* act)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::UberDelegate_1_System_Object_* this_ptr)
} // namespace app::classes::UberDelegate_1_System_Object_

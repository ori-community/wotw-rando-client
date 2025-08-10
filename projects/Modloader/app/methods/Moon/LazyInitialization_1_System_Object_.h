#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/LazyInitialization_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::LazyInitialization_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019F85F0, app::Object*, get_Value, app::LazyInitialization_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F85D0, void, ctor, app::LazyInitialization_1_System_Object_* this_ptr, app::Func_1_Object_* initializer)
    IL2CPP_REGISTER_METHOD(0x019F8630, void, Refresh, app::LazyInitialization_1_System_Object_* this_ptr)
} // namespace app::classes::Moon::LazyInitialization_1_System_Object_

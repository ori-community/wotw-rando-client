#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VoidComponentTracker_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_System_Object_.h>

namespace app::classes::VoidComponentTracker_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Register, (app::VoidComponentTracker_1_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Collect, (app::VoidComponentTracker_1_System_Object_ * this_ptr, app::List_1_System_Object_* items))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::VoidComponentTracker_1_System_Object_ * this_ptr))
} // namespace app::classes::VoidComponentTracker_1_System_Object_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvokableCall_3_System_Object_System_Object_System_Object_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::UnityEngine::Events::InvokableCall_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AC6B30, void, ctor, (app::InvokableCall_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02AC6C90, void, Invoke, (app::InvokableCall_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (app::InvokableCall_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* target_obj, app::MethodInfo_1* method_1))
} // namespace app::classes::UnityEngine::Events::InvokableCall_3_System_Object_System_Object_System_Object_

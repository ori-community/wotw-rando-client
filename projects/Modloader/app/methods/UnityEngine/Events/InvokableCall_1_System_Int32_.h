#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::InvokableCall_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02AC5610, void, ctor_1, (app::InvokableCall_1_System_Int32_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02722840, void, ctor_2, (app::InvokableCall_1_System_Int32_ * this_ptr, app::UnityAction_1_System_Int32_* action))
    IL2CPP_REGISTER_METHOD(0x02AC5290, void, add_Delegate, (app::InvokableCall_1_System_Int32_ * this_ptr, app::UnityAction_1_System_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x02AC5350, void, remove_Delegate, (app::InvokableCall_1_System_Int32_ * this_ptr, app::UnityAction_1_System_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x02AC5780, void, Invoke_1, (app::InvokableCall_1_System_Int32_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHODINFO(0x04718EA8, InvokableCall_1_System_Int32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC5920, void, Invoke_2, (app::InvokableCall_1_System_Int32_ * this_ptr, int32_t args0))
    IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (app::InvokableCall_1_System_Int32_ * this_ptr, app::Object* target_obj, app::MethodInfo_1* method_1))
} // namespace app::classes::UnityEngine::Events::InvokableCall_1_System_Int32_

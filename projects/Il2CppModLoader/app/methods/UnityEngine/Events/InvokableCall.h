#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::InvokableCall {
    IL2CPP_REGISTER_METHOD(0x0242EB20, void, ctor_1, (app::InvokableCall * this_ptr, app::Object * target, app::MethodInfo_1 * the_function))
    IL2CPP_REGISTER_METHOD(0x0242EC50, void, ctor_2, (app::InvokableCall * this_ptr, app::UnityAction * action))
    IL2CPP_REGISTER_METHOD(0x0242EC60, void, add_Delegate, (app::InvokableCall * this_ptr, app::UnityAction * value))
    IL2CPP_REGISTER_METHOD(0x0242ED50, void, remove_Delegate, (app::InvokableCall * this_ptr, app::UnityAction * value))
    IL2CPP_REGISTER_METHOD(0x0242EE40, void, Invoke_1, (app::InvokableCall * this_ptr, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x0242EE40, void, Invoke_2, (app::InvokableCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (app::InvokableCall * this_ptr, app::Object * target_obj, app::MethodInfo_1 * method_1))
}

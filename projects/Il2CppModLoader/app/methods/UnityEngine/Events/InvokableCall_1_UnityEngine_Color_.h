#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Events::InvokableCall_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02AC6060, void, ctor_1, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02722840, void, ctor_2, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::UnityAction_1_UnityEngine_Color_* action))
    IL2CPP_REGISTER_METHOD(0x02AC5290, void, add_Delegate, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::UnityAction_1_UnityEngine_Color_* value))
    IL2CPP_REGISTER_METHOD(0x02AC5350, void, remove_Delegate, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::UnityAction_1_UnityEngine_Color_* value))
    IL2CPP_REGISTER_METHOD(0x02AC61D0, void, Invoke_1, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHODINFO(0x0474BFC8, InvokableCall_1_UnityEngine_Color__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC6380, void, Invoke_2, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::Color args0))
    IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (app::InvokableCall_1_UnityEngine_Color_ * this_ptr, app::Object* target_obj, app::MethodInfo_1* method_1))
} // namespace app::classes::UnityEngine::Events::InvokableCall_1_UnityEngine_Color_

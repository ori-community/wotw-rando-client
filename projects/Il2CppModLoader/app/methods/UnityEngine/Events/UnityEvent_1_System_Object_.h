#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityEvent_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_System_Object_ * this_ptr, app::UnityAction_1_System_Object_ * call))
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_System_Object_ * this_ptr, app::UnityAction_1_System_Object_ * call))
    IL2CPP_REGISTER_METHOD(0x02AC95D0, app::MethodInfo_1 *, FindMethod_Impl, (app::UnityEvent_1_System_Object_ * this_ptr, app::String * name, app::Object * target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall *, GetDelegate_1, (app::UnityEvent_1_System_Object_ * this_ptr, app::Object * target, app::MethodInfo_1 * the_function))
    IL2CPP_REGISTER_METHOD(0x02AC8DF0, app::BaseInvokableCall *, GetDelegate_2, (app::UnityAction_1_System_Object_ * action))
    IL2CPP_REGISTER_METHOD(0x02AC9710, void, Invoke, (app::UnityEvent_1_System_Object_ * this_ptr, app::Object * arg0))
}

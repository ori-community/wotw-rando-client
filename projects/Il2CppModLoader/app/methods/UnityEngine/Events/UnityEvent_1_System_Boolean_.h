#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_System_Boolean_ * this_ptr, app::UnityAction_1_System_Boolean_* call))
    IL2CPP_REGISTER_METHODINFO(0x0474F778, UnityEvent_1_System_Boolean__AddListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8F50, void, Invoke, (app::UnityEvent_1_System_Boolean_ * this_ptr, bool arg0))
    IL2CPP_REGISTER_METHODINFO(0x04755D30, UnityEvent_1_System_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792578, UnityEvent_1_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_System_Boolean_ * this_ptr, app::UnityAction_1_System_Boolean_* call))
    IL2CPP_REGISTER_METHOD(0x02AC8B90, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_System_Boolean_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate_1, (app::UnityEvent_1_System_Boolean_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02AC8DF0, app::BaseInvokableCall*, GetDelegate_2, (app::UnityAction_1_System_Boolean_ * action))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Boolean_

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02AC9AB0, void, Invoke, (app::UnityEvent_1_System_Single_ * this_ptr, float arg0))
    IL2CPP_REGISTER_METHODINFO(0x0476E880, UnityEvent_1_System_Single__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_System_Single_ * this_ptr, app::UnityAction_1_System_Single_* call))
    IL2CPP_REGISTER_METHODINFO(0x047242A0, UnityEvent_1_System_Single__AddListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741448, UnityEvent_1_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_System_Single_ * this_ptr, app::UnityAction_1_System_Single_* call))
    IL2CPP_REGISTER_METHODINFO(0x047584E8, UnityEvent_1_System_Single__RemoveListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC9970, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_System_Single_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate_1, (app::UnityEvent_1_System_Single_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02AC8DF0, app::BaseInvokableCall*, GetDelegate_2, (app::UnityAction_1_System_Single_ * action))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Single_

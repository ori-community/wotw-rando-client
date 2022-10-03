#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02ACA250, void, Invoke, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 arg0))
    IL2CPP_REGISTER_METHODINFO(0x04784A50, UnityEvent_1_UnityEngine_Vector2__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771A70, UnityEvent_1_UnityEngine_Vector2___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr, app::UnityAction_1_UnityEngine_Vector2_* call))
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr, app::UnityAction_1_UnityEngine_Vector2_* call))
    IL2CPP_REGISTER_METHOD(0x02ACA110, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate_1, (app::UnityEvent_1_UnityEngine_Vector2_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02AC8DF0, app::BaseInvokableCall*, GetDelegate_2, (app::UnityAction_1_UnityEngine_Vector2_ * action))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_Vector2_

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACA4E0, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_2_System_Object_System_Object_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02ACA690, app::BaseInvokableCall*, GetDelegate, (app::UnityEvent_2_System_Object_System_Object_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
} // namespace app::classes::UnityEngine::Events::UnityEvent_2_System_Object_System_Object_

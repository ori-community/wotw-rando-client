#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityEvent_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_3_System_Object_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACA7B0, app::MethodInfo_1 *, FindMethod_Impl, (app::UnityEvent_3_System_Object_System_Object_System_Object_ * this_ptr, app::String * name, app::Object * target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall *, GetDelegate, (app::UnityEvent_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object * target, app::MethodInfo_1 * the_function))
}

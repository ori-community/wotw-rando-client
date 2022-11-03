#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02AC9710, void, Invoke, (app::UnityEvent_1_System_String_ * this_ptr, app::String* arg0))
    IL2CPP_REGISTER_METHODINFO(0x0475B688, UnityEvent_1_System_String__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774D38, UnityEvent_1_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_System_String_ * this_ptr, app::UnityAction_1_System_String_* call))
    IL2CPP_REGISTER_METHODINFO(0x04756348, UnityEvent_1_System_String__AddListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC95D0, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_System_String_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate, (app::UnityEvent_1_System_String_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_System_String_

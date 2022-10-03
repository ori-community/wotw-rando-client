#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_ {
    IL2CPP_REGISTER_METHOD(0x02AC9710, void, Invoke, (app::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_ * this_ptr, app::BaseEventData* arg0))
    IL2CPP_REGISTER_METHODINFO(0x047759A0, UnityEvent_1_UnityEngine_EventSystems_BaseEventData__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047384F0, UnityEvent_1_UnityEngine_EventSystems_BaseEventData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC95D0, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate, (app::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_EventSystems_BaseEventData_

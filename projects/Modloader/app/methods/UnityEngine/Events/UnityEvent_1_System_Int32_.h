#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnityEvent_1_System_Int32_.h>
#include <Modloader/app/structs/UnityAction_1_System_Int32_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/BaseInvokableCall.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_System_Int32_ * this_ptr, app::UnityAction_1_System_Int32_* call))
    IL2CPP_REGISTER_METHODINFO(0x04731C40, UnityEvent_1_System_Int32__AddListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC9330, void, Invoke, (app::UnityEvent_1_System_Int32_ * this_ptr, int32_t arg0))
    IL2CPP_REGISTER_METHODINFO(0x047489A0, UnityEvent_1_System_Int32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739F00, UnityEvent_1_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_System_Int32_ * this_ptr, app::UnityAction_1_System_Int32_* call))
    IL2CPP_REGISTER_METHOD(0x02AC91F0, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent_1_System_Int32_ * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall*, GetDelegate_1, (app::UnityEvent_1_System_Int32_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02AC8DF0, app::BaseInvokableCall*, GetDelegate_2, (app::UnityAction_1_System_Int32_ * action))
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_System_Int32_

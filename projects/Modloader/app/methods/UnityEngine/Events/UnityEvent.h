#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityEvent.h>
#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityAction.h>

namespace app::classes::UnityEngine::Events::UnityEvent {
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02430A40, void, AddListener, (app::UnityEvent * this_ptr, app::UnityAction* call))
    IL2CPP_REGISTER_METHOD(0x02430BA0, app::MethodInfo_1*, FindMethod_Impl, (app::UnityEvent * this_ptr, app::String* name, app::Object* target_obj))
    IL2CPP_REGISTER_METHOD(0x02430C40, app::BaseInvokableCall*, GetDelegate_1, (app::UnityEvent * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02430D90, app::BaseInvokableCall*, GetDelegate_2, (app::UnityAction * action))
    IL2CPP_REGISTER_METHOD(0x02430EE0, void, Invoke, (app::UnityEvent * this_ptr))
} // namespace app::classes::UnityEngine::Events::UnityEvent

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvokableCall_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/UnityAction_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Events::InvokableCall_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02AC63F0, void, ctor_1, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::Object* target, app::MethodInfo_1* the_function))
    IL2CPP_REGISTER_METHOD(0x02722840, void, ctor_2, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::UnityAction_1_UnityEngine_Vector2_* action))
    IL2CPP_REGISTER_METHOD(0x02AC5290, void, add_Delegate, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::UnityAction_1_UnityEngine_Vector2_* value))
    IL2CPP_REGISTER_METHOD(0x02AC5350, void, remove_Delegate, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::UnityAction_1_UnityEngine_Vector2_* value))
    IL2CPP_REGISTER_METHOD(0x02AC6560, void, Invoke_1, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x02AC6710, void, Invoke_2, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 args0))
    IL2CPP_REGISTER_METHOD(0x0242EE80, bool, Find, (app::InvokableCall_1_UnityEngine_Vector2_ * this_ptr, app::Object* target_obj, app::MethodInfo_1* method_1))
} // namespace app::classes::UnityEngine::Events::InvokableCall_1_UnityEngine_Vector2_

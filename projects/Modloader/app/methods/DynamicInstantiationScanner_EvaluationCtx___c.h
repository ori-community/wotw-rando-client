#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx_c.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DynamicInstantiationScanner_EvaluationCtx___c {
    IL2CPP_REGISTER_METHOD(0x030E5970, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DynamicInstantiationScanner_EvaluationCtx_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030E5AB0, int32_t, _GetEvaluationPath_b__12_0, (app::DynamicInstantiationScanner_EvaluationCtx_c * this_ptr, app::KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ a, app::KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ b))
    IL2CPP_REGISTER_METHOD(0x030E5B60, app::String*, _GetEvaluationPath_b__12_1, (app::DynamicInstantiationScanner_EvaluationCtx_c * this_ptr, app::KeyValuePair_2_UnityEngine_ScriptableObject_System_Int32_ x))
} // namespace app::classes::DynamicInstantiationScanner_EvaluationCtx___c

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DynamicInstantiationScanner_EvaluationCtx {
    IL2CPP_REGISTER_METHOD(0x030E5120, void, ctor, (app::DynamicInstantiationScanner_EvaluationCtx * this_ptr, app::MonoBehaviour * root_component, app::Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ * on_game_object_found))
    IL2CPP_REGISTER_METHOD(0x030E5530, app::String *, GetEvaluationPath, (app::DynamicInstantiationScanner_EvaluationCtx * this_ptr))
}

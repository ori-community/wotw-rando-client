#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::AnimationParameterSet {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_PreviewMode, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B034C0, void, set_PreviewMode, (app::AnimationParameterSet * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_*, get_Parameters, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B035D0, void, Update, (app::AnimationParameterSet * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x01B036E0, float, GetValue_1, (app::AnimationParameterSet * this_ptr, app::FloatAnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x01B037E0, void, SetValue_1, (app::AnimationParameterSet * this_ptr, app::FloatAnimationParameter* parameter, float value))
    IL2CPP_REGISTER_METHOD(0x01B03AF0, app::Vector3, GetValue_2, (app::AnimationParameterSet * this_ptr, app::VectorAnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x01B03C20, void, SetValue_2, (app::AnimationParameterSet * this_ptr, app::VectorAnimationParameter* parameter, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01B03E80, bool, HasValueForParameter, (app::AnimationParameterSet * this_ptr, app::AnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x01B03F40, void, ctor, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B04180, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01EB8980, app::List_1_System_Object_*, GetParametersOfType_1, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EBAB0, app::Object*, GetParameterInstance_1, (app::AnimationParameterSet * this_ptr, app::AnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x015EBAB0, app::FloatAnimationParameter_Instance*, GetParameterInstance_2, (app::AnimationParameterSet * this_ptr, app::AnimationParameter* parameter))
    IL2CPP_REGISTER_METHODINFO(0x04719B68, AnimationParameterSet_GetParameterInstance_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EBAB0, app::VectorAnimationParameter_Instance*, GetParameterInstance_3, (app::AnimationParameterSet * this_ptr, app::AnimationParameter* parameter))
    IL2CPP_REGISTER_METHODINFO(0x04748A48, AnimationParameterSet_GetParameterInstance_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB8980, app::List_1_Moon_FloatAnimationParameter_*, GetParametersOfType_2, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725610, AnimationParameterSet_GetParametersOfType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB8980, app::List_1_Moon_VectorAnimationParameter_*, GetParametersOfType_3, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757300, AnimationParameterSet_GetParametersOfType_2__MethodInfo)
} // namespace app::classes::Moon::AnimationParameterSet

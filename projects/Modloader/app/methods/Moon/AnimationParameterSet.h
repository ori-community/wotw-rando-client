#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationParameter.h>
#include <Modloader/app/structs/Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/FloatAnimationParameter_Instance.h>
#include <Modloader/app/structs/List_1_Moon_FloatAnimationParameter_.h>
#include <Modloader/app/structs/List_1_Moon_VectorAnimationParameter_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#include <Modloader/app/structs/VectorAnimationParameter_Instance.h>

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
    IL2CPP_REGISTER_METHOD(0x015EBAB0, app::VectorAnimationParameter_Instance*, GetParameterInstance_3, (app::AnimationParameterSet * this_ptr, app::AnimationParameter* parameter))
    IL2CPP_REGISTER_METHOD(0x01EB8980, app::List_1_Moon_FloatAnimationParameter_*, GetParametersOfType_2, (app::AnimationParameterSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB8980, app::List_1_Moon_VectorAnimationParameter_*, GetParametersOfType_3, (app::AnimationParameterSet * this_ptr))
} // namespace app::classes::Moon::AnimationParameterSet

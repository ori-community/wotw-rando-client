#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#include <Modloader/app/structs/VectorAnimationParameter_Instance.h>

namespace app::classes::Moon::VectorAnimationParameter_Instance {
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_TargetValue, app::VectorAnimationParameter_Instance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02125970, void, set_TargetValue, app::VectorAnimationParameter_Instance* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00446940, app::Vector3, get_CurrentValue, app::VectorAnimationParameter_Instance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_PreviewMode, app::VectorAnimationParameter_Instance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_PreviewMode, app::VectorAnimationParameter_Instance* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x021259C0, void, ctor, app::VectorAnimationParameter_Instance* this_ptr, app::VectorAnimationParameter* parameter)
    IL2CPP_REGISTER_METHOD(0x02125A00, void, Update, app::VectorAnimationParameter_Instance* this_ptr, float dt)
} // namespace app::classes::Moon::VectorAnimationParameter_Instance

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightCullingSystem_LightCullingGroup {
    IL2CPP_REGISTER_METHOD(0x00E15170, void, set_Config, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::LightCullingSystem_LightCullingConfigPerType value))
    IL2CPP_REGISTER_METHOD(0x0114B950, app::String*, get_Name, (app::LightCullingSystem_LightCullingGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::LightCullingSystem_LightCullingGroupId__Enum, get_Id, (app::LightCullingSystem_LightCullingGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Enabled, (app::LightCullingSystem_LightCullingGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Enabled, (app::LightCullingSystem_LightCullingGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_MaxAmount, (app::LightCullingSystem_LightCullingGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_MaxAmount, (app::LightCullingSystem_LightCullingGroup * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0114BA10, void, ctor, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::LightCullingSystem_LightCullingGroupId__Enum id, int32_t max_amount, app::LightPriority_Layer__Enum__Array* layers))
    IL2CPP_REGISTER_METHOD(0x0114BD70, void, Update, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::List_1_PointLightMaskModifier_* lights, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0114C000, bool, FlaggedForCulling, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::PointLightMaskModifier* light))
    IL2CPP_REGISTER_METHOD(0x0114C0D0, bool, CanBeCulled, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::PointLightMaskModifier* light))
    IL2CPP_REGISTER_METHOD(0x0114C180, void, AddValidLight, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::PointLightMaskModifier* light))
    IL2CPP_REGISTER_METHOD(0x0114C2B0, void, CalculateScore, (app::LightCullingSystem_LightCullingGroup * this_ptr, app::PointLightMaskModifier* light))
    IL2CPP_REGISTER_METHOD(0x0114C5F0, void, Clear, (app::LightCullingSystem_LightCullingGroup * this_ptr))
} // namespace app::classes::LightCullingSystem_LightCullingGroup

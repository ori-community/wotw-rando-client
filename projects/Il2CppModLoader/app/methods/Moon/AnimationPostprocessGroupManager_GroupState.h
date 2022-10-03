#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AnimationPostprocessGroupManager_GroupState {
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_Weight, (app::AnimationPostprocessGroupManager_GroupState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B05230, void, ctor, (app::AnimationPostprocessGroupManager_GroupState * this_ptr, app::AnimationPostprocessGroup* group))
    IL2CPP_REGISTER_METHOD(0x01B05240, void, Enable_1, (app::AnimationPostprocessGroupManager_GroupState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B05270, void, Disable_1, (app::AnimationPostprocessGroupManager_GroupState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B052A0, void, Enable_2, (app::AnimationPostprocessGroupManager_GroupState * this_ptr, float blend_in_time))
    IL2CPP_REGISTER_METHOD(0x01B052B0, void, Disable_2, (app::AnimationPostprocessGroupManager_GroupState * this_ptr, float blend_out_time))
    IL2CPP_REGISTER_METHOD(0x01B052C0, void, Update, (app::AnimationPostprocessGroupManager_GroupState * this_ptr, float delta_time))
} // namespace app::classes::Moon::AnimationPostprocessGroupManager_GroupState

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AnimationPostprocessGroupManager {
    IL2CPP_REGISTER_METHOD(0x01B04910, float, GetGroupWeight, (app::AnimationPostprocessGroupManager * this_ptr, app::AnimationPostprocessGroup* group))
    IL2CPP_REGISTER_METHOD(0x01B04A20, void, DisableGroup_1, (app::AnimationPostprocessGroupManager * this_ptr, app::AnimationPostprocessGroup* group))
    IL2CPP_REGISTER_METHOD(0x01B04A40, void, DisableGroup_2, (app::AnimationPostprocessGroupManager * this_ptr, app::AnimationPostprocessGroup* group, float blend_out_time))
    IL2CPP_REGISTER_METHOD(0x01B04C90, void, EnableGroup_1, (app::AnimationPostprocessGroupManager * this_ptr, app::AnimationPostprocessGroup* group))
    IL2CPP_REGISTER_METHOD(0x01B04CB0, void, EnableGroup_2, (app::AnimationPostprocessGroupManager * this_ptr, app::AnimationPostprocessGroup* group, float blend_in_time))
    IL2CPP_REGISTER_METHOD(0x01B04DC0, void, Update, (app::AnimationPostprocessGroupManager * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B04FF0, void, ctor, (app::AnimationPostprocessGroupManager * this_ptr))
} // namespace app::classes::Moon::AnimationPostprocessGroupManager

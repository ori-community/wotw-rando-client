#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TentacleAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ABA70, void, OnAddedToAnimator, (app::TentacleAnimationPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x010ABA80, void, SaveAnimatedData, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ABFA0, void, Process, (app::TentacleAnimationPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010AC8E0, app::Quaternion, HeadAnimatedRotation, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ACB70, app::Vector3, HeadAnimatedDirection, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::TentacleAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ACBF0, void, cctor, ())
} // namespace app::classes::Moon::TentacleAnimationPostprocess

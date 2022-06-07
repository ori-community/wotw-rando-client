#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BlendAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x01B0B210, app::Transform *, DuplicateHierarchy, (app::Transform * transform, app::Transform * mask_transform, app::Transform * parent))
    IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_Order, (app::BlendAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0B9C0, bool, get_HasFinished, (app::BlendAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0BA10, void, OnAddedToAnimator, (app::BlendAnimationPostprocess * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x01B0BD90, void, OnRemovedFromAnimator, (app::BlendAnimationPostprocess * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x01B0BE60, void, Process, (app::BlendAnimationPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B0BFF0, void, ProcessRecursive, (app::BlendAnimationPostprocess * this_ptr, app::Transform * target_transform, app::Transform * source_transform))
    IL2CPP_REGISTER_METHOD(0x01B0C8F0, void, ctor, (app::BlendAnimationPostprocess * this_ptr))
}

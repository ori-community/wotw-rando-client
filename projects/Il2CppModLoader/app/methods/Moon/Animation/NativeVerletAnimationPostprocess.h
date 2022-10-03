#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Animation::NativeVerletAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x01B026D0, bool, get_IsAllowed, (app::NativeVerletAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B02770, bool, get_IsActive, (app::NativeVerletAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ABE2D0, app::AnimationVerletPlayable, get_Playable, (app::NativeVerletAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B02810, app::Playable, ConstructPlayable, (app::NativeVerletAnimationPostprocess * this_ptr, app::PlayableGraph playable_graph))
    IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (app::NativeVerletAnimationPostprocess * this_ptr, app::MoonAnimator* animator, float blend_in_duration))
    IL2CPP_REGISTER_METHOD(0x01B02BE0, void, RemoveFromAnimator, (app::NativeVerletAnimationPostprocess * this_ptr, float blend_out_duration))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, OnAddedToAnimator, (app::NativeVerletAnimationPostprocess * this_ptr, app::MoonAnimator* animator, app::Playable playable))
    IL2CPP_REGISTER_METHOD(0x00405E70, void, OnRemovedFromAnimator, (app::NativeVerletAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B02C10, void, UpdateAnimatorPostprocessData, (app::NativeVerletAnimationPostprocess * this_ptr, app::Playable playable, app::AnimatorPostprocessUpdateData update_data))
    IL2CPP_REGISTER_METHOD(0x01B03160, void, ctor, (app::NativeVerletAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B031F0, void, cctor, ())
} // namespace app::classes::Moon::Animation::NativeVerletAnimationPostprocess

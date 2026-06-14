#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::AnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B042D0, bool, get_IsActive, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B04300, app::GameObject*, get_AnimatedObject, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, app::AnimationPostprocess* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01B04320, float, get_TotalWeight, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B04540, bool, get_IsPlaying, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasFinished, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B045E0, void, OnEnable, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostEnable, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B047B0, void, OnDisable, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostDisable, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, OnAddedToAnimator, app::AnimationPostprocess* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, app::AnimationPostprocess* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnActivated, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeactivated, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneGui, app::AnimationPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::AnimationPostprocess* this_ptr)
} // namespace app::classes::Moon::AnimationPostprocess

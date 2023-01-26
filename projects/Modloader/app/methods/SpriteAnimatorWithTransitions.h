#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/Action_1_TextureAnimation_.h>
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TextureAnimator.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>

namespace app::classes::SpriteAnimatorWithTransitions {
    IL2CPP_REGISTER_METHOD(0x00938890, bool, get_IsTransitionPlaying, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC680, app::Renderer*, get_Renderer, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC750, bool, get_AnimationEnded, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC790, void, InitBinder, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC910, void, OnEnable, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AC9C0, void, Awake, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ACB70, void, OnEditorEnable, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnDisable, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ACDA0, void, OnDestroy, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ACE90, void, OnEditorDisable, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ACF70, void, Start, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ACF80, void, UpdateCurrentBinding, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD1E0, void, FixedUpdate, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::TextureAnimator*, get_TextureAnimator, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD2C0, void, ChangeMainTextureToAnimatorTexture, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD4F0, float, get_CurrentAnimationTime, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD510, void, set_CurrentAnimationTime, (app::SpriteAnimatorWithTransitions * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x009AD540, app::TextureAnimation*, get_CurrentAnimation, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintCurrentTextureAnimator, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintCurrentTextureAnimatorWithTranstion, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsInScene, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsInScene, (app::SpriteAnimatorWithTransitions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009AD560, void, add_OnAnimationEndEvent, (app::SpriteAnimatorWithTransitions * this_ptr, app::Action_1_TextureAnimation_* value))
    IL2CPP_REGISTER_METHOD(0x009AD650, void, remove_OnAnimationEndEvent, (app::SpriteAnimatorWithTransitions * this_ptr, app::Action_1_TextureAnimation_* value))
    IL2CPP_REGISTER_METHOD(0x009AD740, void, add_OnAnimationLoopEvent, (app::SpriteAnimatorWithTransitions * this_ptr, app::Action_1_TextureAnimation_* value))
    IL2CPP_REGISTER_METHOD(0x009AD830, void, remove_OnAnimationLoopEvent, (app::SpriteAnimatorWithTransitions * this_ptr, app::Action_1_TextureAnimation_* value))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsSuspended, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_IsSuspended, (app::SpriteAnimatorWithTransitions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009AD930, void, SetAnimation, (app::SpriteAnimatorWithTransitions * this_ptr, app::TextureAnimationWithTransitions* texture_animation_with_transitions, bool ignore_if_same_animation))
    IL2CPP_REGISTER_METHOD(0x009ADEF0, app::Atlas*, get_SettingsAtlas, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE150, app::UberScreenMode__Enum, GetExternalUberScreenMode, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE220, float, GetUberTweakValue, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE2F0, bool, DoesProvideAtlas, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE3A0, void, SetDirty, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE3B0, void, OnPoolSpawned, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::SpriteAnimatorWithTransitions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AE3D0, void, ctor, (app::SpriteAnimatorWithTransitions * this_ptr))
} // namespace app::classes::SpriteAnimatorWithTransitions

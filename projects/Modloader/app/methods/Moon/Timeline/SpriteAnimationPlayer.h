#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpriteAnimationPlayer.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimator.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>

namespace app::classes::Moon::Timeline::SpriteAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::TextureAnimator*, get_TextureAnimator, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D05BE0, void, add_OnAnimationEndEvent, app::SpriteAnimationPlayer* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D05CD0, void, remove_OnAnimationEndEvent, app::SpriteAnimationPlayer* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D05DC0, void, InitBinder, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D05F40, void, Awake, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D060E0, void, InitializeMesh, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D062D0, void, OnDestroy, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_HasAnimationEndedTriggered, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603D70, void, set_HasAnimationEndedTriggered, app::SpriteAnimationPlayer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D063D0, void, CacheOriginals, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D064B0, void, SampleValue, app::SpriteAnimationPlayer* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x00D06690, void, RestoreToOriginalState, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D066A0, void, OnStartPlayback, app::SpriteAnimationPlayer* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D066E0, void, OnStopPlayback, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D06710, void, OnUpdateEntity, app::SpriteAnimationPlayer* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00D06AE0, void, EnableRenderer, app::SpriteAnimationPlayer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D06B10, bool, get_AnimationEnded, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D06B40, void, ChangeMainTextureToAnimatorTexture, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D06D40, app::Atlas*, get_SettingsAtlas, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D06F00, app::UberScreenMode__Enum, GetExternalUberScreenMode, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07010, float, GetUberTweakValue, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07120, bool, DoesProvideAtlas, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07220, void, SetAnimation, app::SpriteAnimationPlayer* this_ptr, app::TextureAnimation* texture_animation, bool reset_time)
    IL2CPP_REGISTER_METHOD(0x00D073D0, void, AnimationStart, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07570, app::TextureAnimation*, get_CurrentAnimation, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D07590, void, SetDirty, app::SpriteAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D075A0, void, ctor, app::SpriteAnimationPlayer* this_ptr)
} // namespace app::classes::Moon::Timeline::SpriteAnimationPlayer

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimator.h>
#include <Modloader/app/structs/UberScreenMode__Enum.h>

namespace app::classes::SpriteAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::TextureAnimator*, get_TextureAnimator, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA060, void, add_OnAnimationEndEvent, app::SpriteAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x009AA150, void, remove_OnAnimationEndEvent, app::SpriteAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x009AA240, void, InitBinder, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA3D0, void, OnEnable, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA3F0, void, OnPoolSpawned, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA460, void, Awake, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA600, void, Start, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA710, void, InitializeMesh, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AA900, void, OnDestroy, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AAA00, void, DoSerialize, app::SpriteAnimator* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_HasAnimationEndedTriggered, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DE880, void, set_HasAnimationEndedTriggered, app::SpriteAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009AABD0, void, CacheOriginals, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AACB0, void, SampleValue, app::SpriteAnimator* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x009AAD40, void, RestoreToOriginalState, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AAD60, void, OnFixedUpdate, app::SpriteAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x009AB080, bool, get_AnimationEnded, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB0B0, void, ChangeMainTextureToAnimatorTexture, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB2B0, app::Atlas*, get_SettingsAtlas, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB470, app::UberScreenMode__Enum, GetExternalUberScreenMode, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB580, float, GetUberTweakValue, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB690, bool, DoesProvideAtlas, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009AB790, void, SetAnimation, app::SpriteAnimator* this_ptr, app::TextureAnimation* texture_animation, bool reset_time)
    IL2CPP_REGISTER_METHOD(0x009AB960, float, get_Duration, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009ABA70, void, AnimationStart, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009ABC10, bool, get_IsLooping, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009ABD10, app::TextureAnimation*, get_CurrentAnimation, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009ABD30, void, SetDirty, app::SpriteAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009ABD40, void, ctor, app::SpriteAnimator* this_ptr)
} // namespace app::classes::SpriteAnimator

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Enemy2D {
    IL2CPP_REGISTER_METHOD(0x00B39300, app::CharacterSpriteMirror*, get_SpriteMirror, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFE4E0, app::SpriteAnimatorWithTransitions*, get_SpriteAnimator, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFE500, app::MoonAnimator*, get_Animator, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D520, Enemy2D_get_Animator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BFE550, app::SoundHost*, get_SoundHost, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735D70, Enemy2D_get_SoundHost__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BFE5D0, bool, get_FaceLeft, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFE610, void, set_FaceLeft, (app::Enemy2D * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BFE660, int32_t, get_FaceLeftSign, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFE6A0, void, Serialize, (app::Enemy2D * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00BFE9A0, bool, get_IsFacingPlayer, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFEA10, void, FacePlayer, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFEA90, void, FaceStartPosition, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFEB10, void, FaceAwayFromPlayer, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFEB90, void, PlayAnimationOnce, (app::Enemy2D * this_ptr, app::TextureAnimationWithTransitions* anim, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x00BFECB0, void, RestartAnimationLoop, (app::Enemy2D * this_ptr, app::TextureAnimationWithTransitions* anim, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x00BFEDD0, void, PlayAnimationLoop, (app::Enemy2D * this_ptr, app::TextureAnimationWithTransitions* anim, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::CharacterAnimationSystem*, IPuppetBase_get_Animation, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C2B80, void, Awake, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFEF00, void, CreatePuppet, (app::Enemy2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::Enemy2D * this_ptr))
} // namespace app::classes::Enemy2D

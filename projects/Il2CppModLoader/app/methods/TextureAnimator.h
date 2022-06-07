#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextureAnimator {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_SpeedMultiplier, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_SpeedMultiplier, (app::TextureAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010EA2E0, void, ctor, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA4C0, void, Advance, (app::TextureAnimator * this_ptr, float time_delta))
    IL2CPP_REGISTER_METHOD(0x010EA500, float, get_AnimationDuration, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA5E0, void, ConstrainTime, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA7C0, void, SetAnimation, (app::TextureAnimator * this_ptr, app::TextureAnimation * animation, bool reset_time))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::TextureAnimation *, get_Animation, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA8B0, app::AtlasSpriteTexture *, get_Texture, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_Time, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA9A0, void, set_Time, (app::TextureAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010EA9B0, float, get_Frame, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EA9E0, void, set_Frame, (app::TextureAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010EAA10, bool, get_AnimationEnded, (app::TextureAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EAB10, float, GetRotationFromMetaData, (app::TextureAnimator * this_ptr, app::String * name))
}

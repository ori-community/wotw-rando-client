#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyTransparencyAnimator {
    IL2CPP_REGISTER_METHOD(0x011291F0, app::GameObject*, get_EffectiveRoot, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011292C0, void, PrintOutRendererData, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011294A0, app::UberShaderProperty_Color__Enum, get_PropertyToUse, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01129570, void, Awake, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01129640, bool, CanBeAnimated, (app::LegacyTransparencyAnimator * this_ptr, app::Renderer* r))
    IL2CPP_REGISTER_METHOD(0x011297C0, void, CacheOriginals, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01129B50, void, AddChild, (app::LegacyTransparencyAnimator * this_ptr, app::Transform* child))
    IL2CPP_REGISTER_METHOD(0x01129F50, void, AddChildren, (app::LegacyTransparencyAnimator * this_ptr, app::Transform* child_transform))
    IL2CPP_REGISTER_METHOD(0x0112A320, void, Register, (app::Transform * child))
    IL2CPP_REGISTER_METHOD(0x0112A4B0, void, ManuallyRegister, (app::LegacyTransparencyAnimator * this_ptr, app::Transform* child))
    IL2CPP_REGISTER_METHOD(0x0112A760, void, SampleValue, (app::LegacyTransparencyAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x0112A830, void, ApplyTransparency, (app::LegacyTransparencyAnimator * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x0112ABE0, void, SetParentOpacity, (app::LegacyTransparencyAnimator * this_ptr, float opacity, app::LegacyTransparencyAnimator_AnimateMode__Enum parent_animate_mode))
    IL2CPP_REGISTER_METHOD(0x0112AD30, float, get_FinalOpacity, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112AD80, void, RestoreToOriginalState, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112B0C0, void, UpdateActiveStates, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112B260, void, ctor, (app::LegacyTransparencyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112B730, void, cctor, ())
} // namespace app::classes::LegacyTransparencyAnimator

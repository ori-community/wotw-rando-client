#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::TransparencyAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x00D0D240, app::TransparencyAnimatorSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00D0D5E0, void, OnDestroy, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0D7C0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::TransparencyAnimatorSystemStrategy*, get_Strategy, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0D920, void, Awake, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0DC80, void, SubmitAlphaInternal, (app::TransparencyAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float value, bool persist, bool auto_enable_and_disable, app::HandoverMode__Enum handover_mode, app::TransparencyMode__Enum transparency_mode))
    IL2CPP_REGISTER_METHOD(0x00D0DCD0, void, SubmitDynamicAlpha, (app::TransparencyAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float value, bool auto_enable_and_disable, app::HandoverMode__Enum handover_mode, app::TransparencyMode__Enum transparency_mode))
    IL2CPP_REGISTER_METHOD(0x00D0DD20, void, SubmitStaticAlpha, (app::TransparencyAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float value, bool auto_enable_and_disable, app::HandoverMode__Enum handover_mode, app::TransparencyMode__Enum transparency_mode))
    IL2CPP_REGISTER_METHOD(0x00D0DD70, bool, GetHandoverAlpha, (app::TransparencyAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float* value))
    IL2CPP_REGISTER_METHOD(0x00D0DDC0, void, SetSceneHidden, (app::TransparencyAnimatorSystem * this_ptr, app::MoonGuid* scene_guid, bool hidden))
    IL2CPP_REGISTER_METHOD(0x00D0DF00, void, OnUpdate, (app::TransparencyAnimatorSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D0E140, void, TimeslicedPath, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0E340, void, RegularPath, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0E370, void, ClearState, (app::TransparencyAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, bool force_moon_hidden_to_false))
    IL2CPP_REGISTER_METHOD(0x00D0E3A0, void, ApplyTransparency, (app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, float value, bool enable_disable, bool* got_hidden))
    IL2CPP_REGISTER_METHOD(0x00D0E830, void, ctor, (app::TransparencyAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0E980, void, cctor, ())
} // namespace app::classes::Moon::Timeline::TransparencyAnimatorSystem

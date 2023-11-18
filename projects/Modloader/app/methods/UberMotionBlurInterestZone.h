#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberMotionBlurInterestZone.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberMotionBlurInterestZone {
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, Awake, (app::UberMotionBlurInterestZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCF380, app::Vector4, GetParams, (app::UberMotionBlurInterestZone * this_ptr, app::Camera* cam))
    IL2CPP_REGISTER_METHOD(0x00FCF7E0, void, OnEnable, (app::UberMotionBlurInterestZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCFAB0, void, OnDisable, (app::UberMotionBlurInterestZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCFB70, void, OnDrawGizmosSelected, (app::UberMotionBlurInterestZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::UberMotionBlurInterestZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCFCC0, void, cctor, ())
} // namespace app::classes::UberMotionBlurInterestZone

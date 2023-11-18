#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>

namespace app::classes::Moon::MoonAnimation_RootMotionSample {
    IL2CPP_REGISTER_METHOD(0x01B17810, app::MoonAnimation_RootMotionSample, Lerp, (app::MoonAnimation_RootMotionSample * s1, app::MoonAnimation_RootMotionSample* s2, float t))
}

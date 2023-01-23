#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FakeMotionBlurModifier.h>

namespace app::classes::FakeMotionBlurModifier {
    IL2CPP_REGISTER_METHOD(0x00994430, void, SetProperties, (app::FakeMotionBlurModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00994560, float, GetQuadExpandSize, (app::FakeMotionBlurModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00994620, void, ctor, (app::FakeMotionBlurModifier * this_ptr))
} // namespace app::classes::FakeMotionBlurModifier

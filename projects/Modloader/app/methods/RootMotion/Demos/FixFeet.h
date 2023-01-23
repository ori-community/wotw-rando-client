#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FixFeet.h>

namespace app::classes::RootMotion::Demos::FixFeet {
    IL2CPP_REGISTER_METHOD(0x0221E010, void, Start, (app::FixFeet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221E0A0, void, Sample, (app::FixFeet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221EA30, void, LateUpdate, (app::FixFeet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::FixFeet * this_ptr))
} // namespace app::classes::RootMotion::Demos::FixFeet

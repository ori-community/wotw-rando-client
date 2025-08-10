#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTrailStressTester.h>

namespace app::classes::MoonTrailStressTester {
    IL2CPP_REGISTER_METHOD(0x0257AC90, void, Start, app::MoonTrailStressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0257B330, void, FixedUpdate, app::MoonTrailStressTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0257B3D0, void, ctor, app::MoonTrailStressTester* this_ptr)
} // namespace app::classes::MoonTrailStressTester

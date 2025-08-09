#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTrailPerformanceTester.h>

namespace app::classes::MoonTrailPerformanceTester {
    IL2CPP_REGISTER_METHOD(0x0060D940, void, Awake, app::MoonTrailPerformanceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030CC2A0, void, Update, app::MoonTrailPerformanceTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030CC540, void, ctor, app::MoonTrailPerformanceTester* this_ptr)
} // namespace app::classes::MoonTrailPerformanceTester

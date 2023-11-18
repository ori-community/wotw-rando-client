#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlHealthProvider.h>

namespace app::classes::PetrifiedOwlHealthProvider {
    IL2CPP_REGISTER_METHOD(0x014E3BE0, float, GetFloatValue, (app::PetrifiedOwlHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PetrifiedOwlHealthProvider * this_ptr))
} // namespace app::classes::PetrifiedOwlHealthProvider

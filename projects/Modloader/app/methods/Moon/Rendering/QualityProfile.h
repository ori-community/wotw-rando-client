#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QualityProfile.h>

namespace app::classes::Moon::Rendering::QualityProfile {
    IL2CPP_REGISTER_METHOD(0x00EB1580, void, Apply, (app::QualityProfile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB1900, void, ctor, (app::QualityProfile * this_ptr))
} // namespace app::classes::Moon::Rendering::QualityProfile

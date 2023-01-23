#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinExperienceVisualMaxNormalizedProvider.h>

namespace app::classes::SeinExperienceVisualMaxNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00AD4C30, float, GetFloatValue, (app::SeinExperienceVisualMaxNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinExperienceVisualMaxNormalizedProvider * this_ptr))
} // namespace app::classes::SeinExperienceVisualMaxNormalizedProvider

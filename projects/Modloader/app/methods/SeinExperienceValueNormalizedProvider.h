#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinExperienceValueNormalizedProvider.h>

namespace app::classes::SeinExperienceValueNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00AD4A30, float, GetFloatValue, app::SeinExperienceValueNormalizedProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinExperienceValueNormalizedProvider* this_ptr)
} // namespace app::classes::SeinExperienceValueNormalizedProvider

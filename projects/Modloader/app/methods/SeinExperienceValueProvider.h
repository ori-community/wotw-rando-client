#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinExperienceValueProvider.h>

namespace app::classes::SeinExperienceValueProvider {
    IL2CPP_REGISTER_METHOD(0x00AD4B40, float, GetFloatValue, app::SeinExperienceValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinExperienceValueProvider* this_ptr)
} // namespace app::classes::SeinExperienceValueProvider

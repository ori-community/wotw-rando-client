#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinExperienceForNextLevelValueProvider.h>

namespace app::classes::SeinExperienceForNextLevelValueProvider {
    IL2CPP_REGISTER_METHOD(0x00AD4940, float, GetFloatValue, (app::SeinExperienceForNextLevelValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinExperienceForNextLevelValueProvider * this_ptr))
} // namespace app::classes::SeinExperienceForNextLevelValueProvider

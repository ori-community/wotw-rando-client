#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::RubberBandedValueProvider {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsAffectedByGameModeDifficulty, (app::RubberBandedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371F70, bool, DoesOverrideEasyMultiplier, (app::RubberBandedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371F80, bool, DoesOverrideNormalMultiplier, (app::RubberBandedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371F90, bool, DoesOverrideHardMultiplier, (app::RubberBandedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01371FA0, float, GetValue, (app::RubberBandedValueProvider * this_ptr, app::Vector3 origin, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x01372450, float, GetDifficultyMultiplier, (app::RubberBandedValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013725D0, float, GetDistance, (app::RubberBandedValueProvider * this_ptr, app::Vector2 origin, app::Vector2 target))
    IL2CPP_REGISTER_METHOD(0x01372760, void, ctor, (app::RubberBandedValueProvider * this_ptr))
} // namespace app::classes::RubberBandedValueProvider

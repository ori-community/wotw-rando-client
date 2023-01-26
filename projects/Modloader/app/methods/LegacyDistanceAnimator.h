#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyDistanceAnimator.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::LegacyDistanceAnimator {
    IL2CPP_REGISTER_METHOD(0x00A19E90, void, Start, (app::LegacyDistanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A19F50, void, FixedUpdate, (app::LegacyDistanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_IsSuspended, (app::LegacyDistanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_IsSuspended, (app::LegacyDistanceAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, (app::LegacyDistanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A3D0, void, set_Mask, (app::LegacyDistanceAnimator * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A1A480, void, ctor, (app::LegacyDistanceAnimator * this_ptr))
} // namespace app::classes::LegacyDistanceAnimator

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LegacyCameraSettingsDistanceBasedAnimator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacyCameraSettingsDistanceBasedAnimator {
    IL2CPP_REGISTER_METHOD(0x015DD330, app::Bounds, GetOuterBounds, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DD640, app::Bounds, GetInnerBounds, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DD830, float, NormalizedMarginPenetration, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr, app::Vector3 world_position))
    IL2CPP_REGISTER_METHOD(0x015DDCC0, void, FixedUpdate, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DDDC0, void, OnEnable, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DDDD0, void, Init, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AnimateIt, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacyCameraSettingsDistanceBasedAnimator * this_ptr))
} // namespace app::classes::LegacyCameraSettingsDistanceBasedAnimator

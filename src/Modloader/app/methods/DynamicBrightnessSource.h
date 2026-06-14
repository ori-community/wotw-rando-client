#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/DynamicBrightnessSource.h>
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::DynamicBrightnessSource {
    IL2CPP_REGISTER_METHOD(0x00BE8F10, app::Vector2, get_CameraPosition, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE90D0, bool, get_IsWithinRadius, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE90F0, float, get_RadiusDiff, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9110, float, get_OutterRadius, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceAdditive, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_BrightnessInfluceMultiplicative, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContributeToAdditive, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9120, bool, get_ContributeToMultiplicative, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9150, app::Bounds, get_Bounds, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x008556D0,
        app::GlobalBrightnessController_BrigthnessContributionOrder__Enum,
        get_BrightnessInfluceOrder,
        app::DynamicBrightnessSource* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00BE9170, float, get_BrightnessInfluceWeight, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9190, bool, get_InsideFrustum, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_InsideFrustum, app::DynamicBrightnessSource* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00BE91A0, void, OnEnable, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9220, void, Awake, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE92E0, void, OnDestroy, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9440, void, UpdateBrigthnessInfluence, app::DynamicBrightnessSource* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00BE9760, void, OnFrustumEnter, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00778590, void, OnFrustumExit, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9770, void, UpdateBounds, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9930, void, OnDrawGizmosSelected, app::DynamicBrightnessSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE9B50, void, ctor, app::DynamicBrightnessSource* this_ptr)
} // namespace app::classes::DynamicBrightnessSource

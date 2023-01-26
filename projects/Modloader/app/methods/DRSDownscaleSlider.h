#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DRSDownscaleSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DRSDownscaleSlider {
    IL2CPP_REGISTER_METHOD(0x00DBFC40, void, Awake, (app::DRSDownscaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBFCA0, float, get_Value, (app::DRSDownscaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBFDB0, void, set_Value, (app::DRSDownscaleSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00DBFED0, app::String*, GetValueToDisplay, (app::DRSDownscaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, (app::DRSDownscaleSlider * this_ptr))
} // namespace app::classes::DRSDownscaleSlider

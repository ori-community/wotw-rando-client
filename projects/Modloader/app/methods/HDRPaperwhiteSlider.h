#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HDRPaperwhiteSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::HDRPaperwhiteSlider {
    IL2CPP_REGISTER_METHOD(0x0109B3A0, void, Awake, (app::HDRPaperwhiteSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109B490, float, get_Value, (app::HDRPaperwhiteSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109B540, void, set_Value, (app::HDRPaperwhiteSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0109B630, app::String*, GetValueToDisplay, (app::HDRPaperwhiteSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::HDRPaperwhiteSlider * this_ptr))
} // namespace app::classes::HDRPaperwhiteSlider

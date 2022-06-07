#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ResolutionOptions {
    IL2CPP_REGISTER_METHOD(0x00905930, void, Awake, (app::ResolutionOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00906260, void, OnEnable, (app::ResolutionOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00906840, void, SetResolution, (app::ResolutionOptions * this_ptr, app::Resolution resolution))
    IL2CPP_REGISTER_METHOD(0x009069A0, app::String *, GetAspectRatio, (app::Vector2 res, float precision))
    IL2CPP_REGISTER_METHOD(0x00906C80, bool, IsAspectRatio, (app::Vector2 res, int32_t horizontal, int32_t vertical, float precision))
    IL2CPP_REGISTER_METHOD(0x00906D60, void, SortResolutions, (app::List_1_ResolutionOptions_ResolutionEntry_ * resolutions))
    IL2CPP_REGISTER_METHOD(0x00906F70, void, ctor, (app::ResolutionOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009070D0, void, cctor, ())
}

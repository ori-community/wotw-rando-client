#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ToggleAllKinematic {
    IL2CPP_REGISTER_METHOD(0x00AFBA80, app::String*, get_Path, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFBB00, void, Awake, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFBB10, app::String*, get_Name, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFBB90, app::String*, get_HelpText, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFBC10, app::String__Array*, get_ToggleOptions, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentToggleOptionId, (app::ToggleAllKinematic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFBD50, void, set_CurrentToggleOptionId, (app::ToggleAllKinematic * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00AFC330, void, ctor, (app::ToggleAllKinematic * this_ptr))
} // namespace app::classes::ToggleAllKinematic

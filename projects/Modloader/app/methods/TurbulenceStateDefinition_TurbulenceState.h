#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurbulenceInfluencerOrder__Enum.h>
#include <Modloader/app/structs/TurbulenceStateDefinition_TurbulenceState.h>

namespace app::classes::TurbulenceStateDefinition_TurbulenceState {
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_TurbulenceMagnitude, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_MagnitudeWeight, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_TurbulenceSpeed, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_SpeedWeight, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::TurbulenceInfluencerOrder__Enum, get_TurbulenceApplyOrder, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D5830, void, ctor, app::TurbulenceStateDefinition_TurbulenceState* this_ptr)
} // namespace app::classes::TurbulenceStateDefinition_TurbulenceState

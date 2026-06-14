#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData.h>

namespace app::classes::SwitchSeriesPuzzleSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, app::SwitchSeriesPuzzleSetupData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00855D10, float, get_DesiredValue, app::SwitchSeriesPuzzleSetupData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SwitchSeriesPuzzleSetupData* this_ptr)
} // namespace app::classes::SwitchSeriesPuzzleSetupData

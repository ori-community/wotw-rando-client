#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RaceStateMachineContext_TimelinesConfiguration.h>
#include <Modloader/app/structs/ScoreResult__Enum.h>

namespace app::classes::RaceStateMachineContext_TimelinesConfiguration {
    IL2CPP_REGISTER_METHOD(0x0071BAF0, app::MoonTimeline*, For, (app::RaceStateMachineContext_TimelinesConfiguration * this_ptr, app::ScoreResult__Enum result))
    IL2CPP_REGISTER_METHODINFO(0x04736FB0, RaceStateMachineContext_TimelinesConfiguration_For__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceStateMachineContext_TimelinesConfiguration * this_ptr))
} // namespace app::classes::RaceStateMachineContext_TimelinesConfiguration

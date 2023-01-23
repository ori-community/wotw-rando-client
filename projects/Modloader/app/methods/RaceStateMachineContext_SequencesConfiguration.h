#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration.h>
#include <Modloader/app/structs/ScoreResult__Enum.h>

namespace app::classes::RaceStateMachineContext_SequencesConfiguration {
    IL2CPP_REGISTER_METHOD(0x0071BA10, app::ActionMethod*, For, (app::RaceStateMachineContext_SequencesConfiguration * this_ptr, app::ScoreResult__Enum result))
    IL2CPP_REGISTER_METHODINFO(0x04771568, RaceStateMachineContext_SequencesConfiguration_For__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceStateMachineContext_SequencesConfiguration * this_ptr))
} // namespace app::classes::RaceStateMachineContext_SequencesConfiguration

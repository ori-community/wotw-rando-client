#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_ {
    IL2CPP_REGISTER_METHOD(0x0225B610, void, ctor, (app::TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDD0, app::IDesiredUberState*, GetRequirementsForTimeline, (app::TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_ * this_ptr, app::MoonTimeline* timeline))
} // namespace app::classes::TransitionBasedSetupHolder_1_GenericDamageTrigger_DamageTriggerSetupData_

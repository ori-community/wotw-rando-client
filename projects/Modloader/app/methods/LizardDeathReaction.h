#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LizardDeathReaction.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LizardDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LizardDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00FA9E50, void, OnCacheSerializedComponents, (app::LizardDeathReaction * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x00FA9F10, void, OnInitializeTask, (app::LizardDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAA080, void, StartTimeline, (app::LizardDeathReaction * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00FAA0B0, void, ResetTimeline, (app::LizardDeathReaction * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00FAA2D0, void, OnEnterTask, (app::LizardDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAA9E0, app::BehaviourStatus__Enum, OnExecuteTask, (app::LizardDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAABA0, void, OnExitTask, (app::LizardDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAABF0, void, SetState, (app::LizardDeathReaction * this_ptr, app::LizardDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00FAACB0, void, EnterState, (app::LizardDeathReaction * this_ptr, app::LizardDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00FAAD20, void, ExitState, (app::LizardDeathReaction * this_ptr, app::LizardDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00FAAD50, void, UpdateState, (app::LizardDeathReaction * this_ptr, app::LizardDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00FAAF90, void, EnterLaunch, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB120, void, EnterSpin, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB150, void, EnterLand, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB2E0, void, EnterDrown, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitLaunch, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitSpin, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitLand, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB700, void, ExitDrown, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB710, void, UpdateLaunch, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB790, void, UpdateSpin, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB7F0, bool, DidLand, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB8D0, void, UpdateLand, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAB9B0, bool, InWater, (app::LizardDeathReaction * this_ptr, float check_offset))
    IL2CPP_REGISTER_METHOD(0x00FABB80, void, UpdateDrown, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FABDB0, app::Vector3, ProcessRootMotion, (app::LizardDeathReaction * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00FABDC0, void, EndReaction, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FABE80, void, ctor, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FABF40, void, _EnterLaunch_b__40_0, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FABFB0, void, _EnterLand_b__42_0, (app::LizardDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FABFB0, void, _EnterDrown_b__43_0, (app::LizardDeathReaction * this_ptr))
} // namespace app::classes::LizardDeathReaction

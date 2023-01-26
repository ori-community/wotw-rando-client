#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IBrainController_1_BrainEntityTester_BrainTesterEntries_.h>
#include <Modloader/app/structs/IBrainController_1_ConditionBasedBrainController_BranchingBoolEntries_.h>
#include <Modloader/app/structs/IBrainController_1_InWaterMode_.h>
#include <Modloader/app/structs/IBrainController_1_KwolokBossEntity_AnimationDirections_.h>
#include <Modloader/app/structs/IBrainController_1_KwolokBossTendril_DurationType_.h>
#include <Modloader/app/structs/IBrainController_1_KwolokBossTendril_VariationType_.h>
#include <Modloader/app/structs/IBrainController_1_NightCrawlerBackAttackBranches_.h>
#include <Modloader/app/structs/IBrainController_1_NightCrawlerChaseIntroBranches_.h>
#include <Modloader/app/structs/IBrainController_1_NightCrawlerRetaliationBranches_.h>
#include <Modloader/app/structs/IBrainController_1_PetrifiedOwlBossEntity_AnimationDirections_.h>
#include <Modloader/app/structs/IBrainController_1_SpiderBossAnimationDirection_.h>
#include <Modloader/app/structs/IBrainController_1_SpiderBossLocationZone_.h>
#include <Modloader/app/structs/IBrainController_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IBrainController_1_TentacleStabOutcome_.h>
#include <Modloader/app/structs/IBrainController_1_TimelineBranchingControllerTest_BranchingTestEntries_.h>

namespace app::classes::Moon::IBrainControllerExtensions {
    IL2CPP_REGISTER_METHOD(0x01BAA500, int32_t, ToInt, (app::Enum e))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_1, (app::IBrainController_1_BrainEntityTester_BrainTesterEntries_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_2, (app::IBrainController_1_ConditionBasedBrainController_BranchingBoolEntries_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_3, (app::IBrainController_1_InWaterMode_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_4, (app::IBrainController_1_KwolokBossEntity_AnimationDirections_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_5, (app::IBrainController_1_KwolokBossTendril_DurationType_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_6, (app::IBrainController_1_KwolokBossTendril_VariationType_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_7, (app::IBrainController_1_TentacleStabOutcome_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_8, (app::IBrainController_1_NightCrawlerBackAttackBranches_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_9, (app::IBrainController_1_NightCrawlerChaseIntroBranches_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_10, (app::IBrainController_1_NightCrawlerRetaliationBranches_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_11, (app::IBrainController_1_PetrifiedOwlBossEntity_AnimationDirections_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_12, (app::IBrainController_1_SpiderBossAnimationDirection_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_13, (app::IBrainController_1_SpiderBossLocationZone_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_14, (app::IBrainController_1_TimelineBranchingControllerTest_BranchingTestEntries_ * controller))
    IL2CPP_REGISTER_METHOD(0x02652700, app::Enum__Array*, BuildEntries_15, (app::IBrainController_1_System_Int32Enum_ * controller))
} // namespace app::classes::Moon::IBrainControllerExtensions

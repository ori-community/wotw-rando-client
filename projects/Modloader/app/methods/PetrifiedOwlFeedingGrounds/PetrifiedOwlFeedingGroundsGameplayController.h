#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundsGameplayController {
    IL2CPP_REGISTER_METHOD(0x014DF990, bool, get_IsSuspended, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DF9A0, void, set_IsSuspended, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006D6510, app::SuspendableMask__Enum, get_Mask, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1EF30, void, set_Mask, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x014DF9C0, void, Awake, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DFA60, void, OnEnable, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DFB00, void, OnDisable, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DFBA0, app::IUberState__Array*, get_AffectingUberStates, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DFC30, app::List_1_UnityEngine_GameObject_*, IUberStateApplier_get_AllTargets, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DFDF0, void, Start, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E0880, void, FixedUpdate, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E0ED0, void, SetState, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr, app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x014E13A0, void, OnSuspended, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E13C0, void, OnRevealStart, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EA30, PetrifiedOwlFeedingGroundsGameplayController_OnRevealStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E1440, void, OnEatStart, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047653D0, PetrifiedOwlFeedingGroundsGameplayController_OnEatStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E1550, void, OnEatEnd, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706300, PetrifiedOwlFeedingGroundsGameplayController_OnEatEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E15D0, void, OnOwlInTheAir, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047168F8, PetrifiedOwlFeedingGroundsGameplayController_OnOwlInTheAir__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E1870, void, OnOwlLanded, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797268, PetrifiedOwlFeedingGroundsGameplayController_OnOwlLanded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E1940, void, OnKillPlayer, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FE18, PetrifiedOwlFeedingGroundsGameplayController_OnKillPlayer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E1980, void, OnRockTriggered, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C5E8, PetrifiedOwlFeedingGroundsGameplayController_OnRockTriggered__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E19B0, void, KillPlayer, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E1D50, void, DebugSetBoxColor, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x014E1EB0, void, SetDebugBoxSize, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E22D0, void, OnDestroy, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E2370, void, SetUberState, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E2440, void, OnEscapeSequenceEnd, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047715F0, PetrifiedOwlFeedingGroundsGameplayController_OnEscapeSequenceEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E2460, void, OnOwlDefeated, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D798, PetrifiedOwlFeedingGroundsGameplayController_OnOwlDefeated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E2480, void, Apply, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x014E2BD0, void, ctor, (app::PetrifiedOwlFeedingGroundsGameplayController * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundsGameplayController

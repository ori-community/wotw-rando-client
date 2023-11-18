#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlUberState__Enum.h>
#include <Modloader/app/structs/FeedingGroundsGameplayController.h>
#include <Modloader/app/structs/IDesiredUberState__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsGameplayController {
    IL2CPP_REGISTER_METHOD(0x01785A30, app::PetrifiedOwlUberState__Enum, get_CurrentUberState, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785A60, void, set_CurrentUberState, (app::FeedingGroundsGameplayController * this_ptr, app::PetrifiedOwlUberState__Enum value))
    IL2CPP_REGISTER_METHOD(0x01785AC0, float, get_VisibleTime, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785AD0, void, set_VisibleTime, (app::FeedingGroundsGameplayController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006ECB60, bool, get_IsSuspended, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785B40, void, set_IsSuspended, (app::FeedingGroundsGameplayController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01785B50, app::SuspendableMask__Enum, get_Mask, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785B60, void, set_Mask, (app::FeedingGroundsGameplayController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01785B70, void, Awake, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785D40, void, OnEnable, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01787130, void, OnDisable, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01788520, void, OnDestroy, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017886F0, void, Initialize, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01788840, void, Update, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01788AB0, void, UpdateFirstSequence, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01788F30, void, UpdateSecondSequence, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789170, void, IncreaseVisibleTime, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017893B0, void, OnCrushPartA, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017894B0, void, TryCrushPartB, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789500, void, TryCrushPartD, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789550, void, DisableFloatZone, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017895C0, void, EnableFloatZone, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789630, void, Escape, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789680, void, CheckVisibleTime, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789700, void, TryKillOri, (app::FeedingGroundsGameplayController * this_ptr, bool instantly))
    IL2CPP_REGISTER_METHOD(0x017898B0, void, KillOri, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789C50, void, RockFall, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789CA0, float, GetCurrentTimer, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789D40, void, UpdateDebugBox, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789E20, float, GetTimeMultiplier, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01789F60, float, GetTimeSpeed, (app::FeedingGroundsGameplayController * this_ptr, bool include_kill_time))
    IL2CPP_REGISTER_METHOD(0x0178A0D0, void, SetAlert, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A130, void, AlertStart, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A160, void, StartStartle, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A1D0, void, StartPeek, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A220, void, EndIntro, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A2A0, void, OwlDefeated, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A310, void, OnRestoreCheckpoint, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A320, void, Apply, (app::FeedingGroundsGameplayController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A3A0, app::IUberState__Array*, get_AffectingUberStates, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A430, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::FeedingGroundsGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0178A5F0, bool, IsSetupTimeline, (app::FeedingGroundsGameplayController * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x0178A8D0, app::IDesiredUberState__Array*, GetRequirementsForTimeline, (app::FeedingGroundsGameplayController * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x0178AC90, void, ctor, (app::FeedingGroundsGameplayController * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsGameplayController

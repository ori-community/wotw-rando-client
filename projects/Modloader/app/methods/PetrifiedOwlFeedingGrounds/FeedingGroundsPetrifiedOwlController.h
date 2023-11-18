#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_KillType__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsState__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsPetrifiedOwlController {
    IL2CPP_REGISTER_METHOD(0x014D9C60, bool, get_ShowDebug, ())
    IL2CPP_REGISTER_METHOD(0x014D9D00, void, set_ShowDebug, (bool value))
    IL2CPP_REGISTER_METHOD(0x014D9E30, app::Quaternion, get_RootMotionRotation, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9EF0, app::Quaternion, get_NonRootMotionRotation, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9FB0, app::PetrifiedOwlFeedingGroundsState__Enum, get_CurrentState, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9FC0, bool, get_IsPreparingToKill, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9FD0, bool, get_IsKilling, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014D9FF0, bool, get_IsAlert, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DA000, void, set_IsAlert, (app::FeedingGroundsPetrifiedOwlController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014DA010, app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum, get_CurrentChaseState, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DA040, void, set_CurrentChaseState, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum value))
    IL2CPP_REGISTER_METHOD(0x014DA0A0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x014DA130, void, Awake, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DA380, void, OnEnable, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DAC40, void, OnDisable, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DB500, void, OnDestroy, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DB670, void, FixedUpdate, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DB930, void, LateUpdate, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DB9C0, void, Eat, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DBB30, void, PlayIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DBBE0, void, MoveToPartD, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DBDB0, void, DestroyPartA, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DBF60, void, DestroyPartB, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DC110, void, DestroyPartD, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DC2C0, void, UpdateKillSweepPosition, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DC5B0, void, ProcessRootMotion, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x014DC7B0, void, ResetState, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DCD30, void, SetState, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::PetrifiedOwlFeedingGroundsState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x014DD120, float, GetCurrentKillTime, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD230, void, PrepareForRootMotion, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD350, void, PrepareForNonRootMotion, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD560, void, PlayKillSweep, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD860, app::Vector3, GetKillSweepOffset, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::FeedingGroundsPetrifiedOwlController_KillType__Enum kill_type))
    IL2CPP_REGISTER_METHOD(0x014DD8C0, app::MoonTimeline*, GetKillSweepTimeline, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::FeedingGroundsPetrifiedOwlController_KillType__Enum kill_type))
    IL2CPP_REGISTER_METHOD(0x014DD8F0, void, SetPartAReadyToDestroy, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD950, void, FinishPartAEnter, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DD960, void, PlayPartAIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDB50, void, PlayPartADestroyIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDC00, void, PlayPartBIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDD10, void, PlayPartBDestroyIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDDC0, void, PlayPartCIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDEC0, void, PlayPartDIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDFD0, void, WaitUntilEnd, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DDFE0, void, PlayEndIdle, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DE090, void, PlayTimeline, (app::FeedingGroundsPetrifiedOwlController * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop_event))
    IL2CPP_REGISTER_METHOD(0x014DE1D0, void, StopCurrentTimeline, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DE2C0, void, SetReadyToRun, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DE3B0, void, TryKillOri, (app::FeedingGroundsPetrifiedOwlController * this_ptr, bool instantly))
    IL2CPP_REGISTER_METHOD(0x014DE550, void, TakeOff, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DE8B0, app::MoonTimeline*, GetCurrentTakeOffTimeline, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DEA20, void, HideOwl, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DEA90, void, ShowOwl, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DEBD0, void, OnGUI, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DEDA0, void, ctor, (app::FeedingGroundsPetrifiedOwlController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsPetrifiedOwlController

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesertEscapeWorm.h>
#include <Modloader/app/structs/DesertEscapeWorm_AdditionalTimelineSet.h>
#include <Modloader/app/structs/DesertEscapeWorm_States__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::DesertEscapeWorm {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, app::DesertEscapeWorm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84150, void, set_Mask, app::DesertEscapeWorm* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00B84200, app::DesertEscapeWorm_States__Enum, get_CurrentUberState, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84230, void, set_CurrentUberState, app::DesertEscapeWorm* this_ptr, app::DesertEscapeWorm_States__Enum value)
    IL2CPP_REGISTER_METHOD(0x00B84300, float, get_HeadLeanParameter, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84340, void, set_HeadLeanParameter, app::DesertEscapeWorm* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00B84370, app::SeinCharacter*, get_Sein, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84400, bool, get_IsRaceRun, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84410, void, set_IsRaceRun, app::DesertEscapeWorm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B84420, void, Awake, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84610, void, OnDestroy, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B847E0, void, Start, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84B30, void, OnEnable, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84BD0, void, OnDisable, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84C70, void, Update, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B84E70, void, UpdateState, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B850F0, void, LateUpdate, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85100, void, OnPreRestoreCheckpoint, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85250, void, ResetTimelines, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B852C0, void, StopTimeline_1, app::DesertEscapeWorm* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00B85390, void, StopTimeline_2, app::DesertEscapeWorm* this_ptr, app::MoonReference_1_Moon_Timeline_MoonTimeline_* timeline)
    IL2CPP_REGISTER_METHOD(0x00B85440, void, OnIntroEnded, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85450, void, OnTimelineAEnded, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85480, void, UpdateAnimationSpeed, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B857D0, void, SetSpeedToAnimations, app::DesertEscapeWorm* this_ptr, float speed)
    IL2CPP_REGISTER_METHOD(0x00B85930, bool, IsBodySpinningAllowed, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85AC0, void, UpdateBodySpinning, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B85F20, void, UpdateHeadLeaning, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B864D0, void, UpdateStartIntro, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86520, void, UpdateStartTimelineB, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86670, void, UpdateStartEnding, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86770, void, UpdateResetDamageDealers, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86860, void, UpdateAdditionalTimelines, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86C60, app::DesertEscapeWorm_AdditionalTimelineSet*, GetCurrentAdditionalTimelineSet, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B86E00, bool, IsLeaningAllowed, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B87020, void, AwardGoldenSein, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B870F0, void, DisableDamageDealers, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B872E0, void, ResetDamageDealers, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B87380, void, Apply, app::DesertEscapeWorm* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00B87AE0, app::IUberState__Array*, get_AffectingUberStates, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B87B70, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::DesertEscapeWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B87D30, void, ctor, app::DesertEscapeWorm* this_ptr)
} // namespace app::classes::DesertEscapeWorm

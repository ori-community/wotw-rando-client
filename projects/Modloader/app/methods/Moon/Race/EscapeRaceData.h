#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/EscapeRaceData.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TriggerColliderCallback.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Race::EscapeRaceData {
    IL2CPP_REGISTER_METHOD(0x00C41510, float, get_TimeLimit, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Condition_1*, get_GetReadyCondition, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Condition_1*, get_PostFinishCondition, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBeaten, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C41520, app::String*, get_RaceName, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPlayEndingAnimation, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DesiredUberStateComposite*, get_StateOverride, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_EquipmentType_*, get_DisabledAbilities, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::List_1_Moon_MoonReference_1__13*, get_RaceSyncables, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MoonTimeline*, get_FlythroughTimeline, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::RaceSettings*, get_RaceSettings, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C41600, app::Vector3, get_StartLinePosition, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006260E0, app::Vector3, get_EndPosition, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::TriggerColliderCallback*, get_EndTriggerCollider, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::List_1_SceneMetaData_*, get_RequiredScenes, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::PlayerInsideZoneChecker__Array*, get_RaceAreaCheckers, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C41690, void, Awake, app::EscapeRaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C41780, void, ctor, app::EscapeRaceData* this_ptr)
} // namespace app::classes::Moon::Race::EscapeRaceData

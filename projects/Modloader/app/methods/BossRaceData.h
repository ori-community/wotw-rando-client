#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BossRaceData {
    IL2CPP_REGISTER_METHOD(0x00D3D530, app::String*, get_RaceName, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::List_1_SceneMetaData_*, get_RequiredScenes, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D6A0, app::Vector3, get_StartLinePosition, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653A60, app::Vector3, get_EndPosition, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MoonTimeline*, get_FlythroughTimeline, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::RaceSettings*, get_RaceSettings, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D730, float, get_TimeLimit, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Condition_1*, get_GetReadyCondition, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Condition_1*, get_PostFinishCondition, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBeaten, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPlayEndingAnimation, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::DesiredUberStateComposite*, get_StateOverride, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::List_1_EquipmentType_*, get_DisabledAbilities, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::List_1_Moon_MoonReference_1__13*, get_RaceSyncables, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Condition_1*, get_BeatenCondition, (app::BossRaceData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D740, void, ctor, (app::BossRaceData * this_ptr))
} // namespace app::classes::BossRaceData

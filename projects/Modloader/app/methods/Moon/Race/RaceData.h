#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__13.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PickupBase.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/RaceData.h>
#include <Modloader/app/structs/RaceData_RaceDataState__Enum.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Race::RaceData {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IUberState*, get_RaceState, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IUberState*, get_RaceIconState, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::IUberState*, get_DynamicRaceInProgressState, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47B40, app::String*, get_RaceName, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::List_1_SceneMetaData_*, get_RequiredScenes, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldPlayEndingAnimation, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47C20, float, get_TimeLimit, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Condition_1*, get_GetReadyCondition, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Condition_1*, get_PostFinishCondition, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::DesiredUberStateComposite*, get_StateOverride, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_EquipmentType_*, get_DisabledAbilities, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::List_1_Moon_MoonReference_1__13*, get_RaceSyncables, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::MoonTimeline*, get_FlythroughTimeline, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::RaceSettings*, get_RaceSettings, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::PickupBase*, get_Reward, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Texture2D*, get_RewardIcon, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D64E0, app::PlayerInsideZoneChecker__Array*, get_RaceAreaCheckers, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005FF510, app::Vector3, get_StartPosition, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47C30, app::Vector3, get_StartLinePosition, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47CC0, app::Vector3, get_EndPosition, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47D50, app::RaceData_RaceDataState__Enum, get_CurrentRaceDataState, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47D70, void, set_CurrentRaceDataState, app::RaceData* this_ptr, app::RaceData_RaceDataState__Enum value)
    IL2CPP_REGISTER_METHOD(0x00C47DC0, bool, get_IsBeaten, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C47DF0, void, FinishedCompleted, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C480D0, void, LogException, app::RaceData* this_ptr, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x00C48170, void, Awake, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C483D0, void, OnDestroy, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48470, void, Start, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48570, void, UpdateFacingDirection, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48650, void, OnFrustumEnter, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48720, void, OnFrustumExit, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058AEC0, bool, get_InsideFrustum, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48840, app::Bounds, get_Bounds, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C48860, void, ctor, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_1, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_2, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_3, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_4, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_5, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_6, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_7, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_8, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_9, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_10, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_11, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_12, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_13, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_14, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_15, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_16, app::RaceData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::IMoonTypeResolver*, GetResolverForType_17, app::RaceData* this_ptr)
} // namespace app::classes::Moon::Race::RaceData

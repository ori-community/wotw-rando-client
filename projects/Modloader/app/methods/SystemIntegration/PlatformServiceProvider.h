#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_List_1__2.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_List_1__3.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IAchievementData.h>
#include <Modloader/app/structs/IDataProvider.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent.h>
#include <Modloader/app/structs/PlatformServiceProvider.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TelemetryEvent__Enum.h>

namespace app::classes::SystemIntegration::PlatformServiceProvider {
    IL2CPP_REGISTER_METHOD(0x00518D60, app::CacheData__Array*, get_AchievementData, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00518DF0, app::CacheData__Array*, get_LeaderBoardData, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00518E80, bool, get_ShowSignInUi, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00518F50, app::IPlatformUser*, get_PrimaryUser, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519000, app::IPlatformUser*, get_SecondaryUser, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005190A0, bool, get_HasSignInError, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519140, bool, get_IsPlayFabSignedIn, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519160, bool, get_IsPrimarySignedIn, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005191F0, bool, get_IsSecondarySignedIn, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519280, bool, get_HasPrimaryImplementation, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519290, bool, get_HasSecondaryImplementation, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005192A0, bool, get_ShowAchievementUi, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00519340, bool, get_HasSynchronizedAchievements, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005193D0, app::String*, get_UserDisplayName, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005194C0, app::String*, get_UserId, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::PlayFabRaceServiceProvider*, get_RaceServiceProvider, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005195B0, app::String*, get_EntityId, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005195D0, bool, get_SignInOnPressAnyButton, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00519670,
        void,
        ctor,
        app::PlatformServiceProvider* this_ptr,
        app::ISignInProvider* primary_sign_in_provider,
        app::IDataProvider* primary_achievement_provider,
        app::ISignInProvider* secondary_sign_in_provider,
        app::IDataProvider* secondary_achievement_provider
    )
    IL2CPP_REGISTER_METHOD(0x0051A070, void, BuildOfflineAchievementCache, app::PlatformServiceProvider* this_ptr, app::String* sign_in)
    IL2CPP_REGISTER_METHOD(0x0051A120, void, Update, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051AF60, void, SignInSilently, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051B010, void, SignIn, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051B110, void, SignInSecondary, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0051B1A0,
        void,
        PostAchievementProgress,
        app::PlatformServiceProvider* this_ptr,
        app::IAchievementData* achievement_data,
        int32_t progress
    )
    IL2CPP_REGISTER_METHOD(0x0051B670, void, PostStatisticValue, app::PlatformServiceProvider* this_ptr, app::String* statistic_id, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x0051B800,
        void,
        PostTelemetry_1,
        app::PlatformServiceProvider* this_ptr,
        app::TelemetryEvent__Enum evt,
        app::Dictionary_2_System_String_System_Object_* data
    )
    IL2CPP_REGISTER_METHOD(0x0051B950, void, PostTelemetry_2, app::PlatformServiceProvider* this_ptr, app::MoonTelemetryClientBaseEvent* evt)
    IL2CPP_REGISTER_METHOD(0x0051BA50, void, ClearLocalCache, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0051BBB0,
        void,
        GetStatistics,
        app::PlatformServiceProvider* this_ptr,
        app::String* statistic_name,
        app::LeaderboardFilter__Enum filter,
        bool force_include_player,
        app::Action_1_System_Collections_Generic_List_1__2* on_complete
    )
    IL2CPP_REGISTER_METHOD(
        0x0051BD90,
        void,
        GetStatisticsEntity,
        app::PlatformServiceProvider* this_ptr,
        app::String* statistic_name,
        app::LeaderboardFilter__Enum filter,
        app::Action_1_System_Collections_Generic_List_1__3* on_complete
    )
    IL2CPP_REGISTER_METHOD(0x0051BDC0, void, OnPlatformUserChanged, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051BEC0, bool, IsGrdk, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051BF80, bool, IsSteam, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051C040, bool, IsPirate, app::PlatformServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051C050, void, RegisterUserChanged, app::PlatformServiceProvider* this_ptr, app::Action* on_user_changed)
    IL2CPP_REGISTER_METHOD(0x0051C0F0, void, UnRegisterUserChanged, app::PlatformServiceProvider* this_ptr, app::Action* on_user_changed)
    IL2CPP_REGISTER_METHOD(0x0051C190, app::PlatformServiceProvider*, BuildForPlatform, )
    IL2CPP_REGISTER_METHOD(0x0051C6A0, app::IDataProvider*, get_PrimaryAchievementDataProviders, )
    IL2CPP_REGISTER_METHOD(0x0051C9F0, app::IDataProvider*, get_SecondaryWinAchievementDataProviders, )
    IL2CPP_REGISTER_METHOD(0x0051CC90, app::IDataProvider*, get_XboxOneAchievementDataProviders, )
    IL2CPP_REGISTER_METHOD(0x0051CF00, app::IDataProvider*, get_SwitchAchievementDataProviders, )
    IL2CPP_REGISTER_METHOD(0x0051D110, app::ISignInProvider*, get_PrimaryWinSignInProviders, )
    IL2CPP_REGISTER_METHOD(0x0051D370, app::ISignInProvider*, get_SecondaryWinSignInProviders, )
    IL2CPP_REGISTER_METHOD(0x0051D4F0, app::ISignInProvider*, get_XboxSignInProviders, )
    IL2CPP_REGISTER_METHOD(0x0051D640, app::ISignInProvider*, get_XalSignInProviders, )
    IL2CPP_REGISTER_METHOD(0x0051D790, bool, IsGrdkCompatible, )
    IL2CPP_REGISTER_METHOD(0x0051D920, bool, IsXalCompatible, )
    IL2CPP_REGISTER_METHOD(0x0051DA10, bool, IsSteamCompatible, )
} // namespace app::classes::SystemIntegration::PlatformServiceProvider

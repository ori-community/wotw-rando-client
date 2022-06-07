#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics {
    IL2CPP_REGISTER_METHOD(0x00535A80, app::String *, get_Name, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronising, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasSynchronised, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00535B00, void, ctor, (app::PlayFabStatistics * this_ptr, app::ISignInProvider * primary_sign_in_provider, app::ISignInProvider * secondary_sign_in_provider))
    IL2CPP_REGISTER_METHOD(0x00535C70, app::CacheData__Array *, AwardedOnServer, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00535D00, void, AwardOnServer, (app::PlayFabStatistics * this_ptr, app::CacheData * data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFromServer, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005363A0, void, Clear, (app::PlayFabStatistics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00536450, void, GetStatistics, (app::PlayFabStatistics * this_ptr, app::String * statistic_name, app::LeaderboardFilter__Enum filter, bool force_include_player, app::Action_1_System_Collections_Generic_List_1__2 * on_complete))
    IL2CPP_REGISTER_METHOD(0x00537DA0, void, GetStatisticsEntity, (app::PlayFabStatistics * this_ptr, app::String * statistic_name, app::LeaderboardFilter__Enum filter, app::Action_1_System_Collections_Generic_List_1__3 * on_complete))
}

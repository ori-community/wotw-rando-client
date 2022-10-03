#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c {
    IL2CPP_REGISTER_METHOD(0x00538C90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabStatistics_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00538DD0, void, _AwardOnServer_b__11_1, (app::PlayFabStatistics_c * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHODINFO(0x04724050, PlayFabStatistics_c__AwardOnServer_b__11_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00538EA0, bool, _GetStatistics_b__14_10, (app::PlayFabStatistics_c * this_ptr, app::PlayerLeaderboardEntry* e))
    IL2CPP_REGISTER_METHODINFO(0x04779BE0, PlayFabStatistics_c__GetStatistics_b__14_10__MethodInfo)
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c

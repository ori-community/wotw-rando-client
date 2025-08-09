#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass15_0.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass15_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabStatistics_c_DisplayClass15_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0053AB90,
        void,
        _GetStatisticsEntity_b__0,
        app::PlayFabStatistics_c_DisplayClass15_0* this_ptr,
        app::ExecuteCloudScriptResult* success
    )
    IL2CPP_REGISTER_METHOD(0x0053ADA0, void, _GetStatisticsEntity_b__1, app::PlayFabStatistics_c_DisplayClass15_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(
        0x0053AF70,
        void,
        _GetStatisticsEntity_b__2,
        app::PlayFabStatistics_c_DisplayClass15_0* this_ptr,
        app::ExecuteCloudScriptResult* success
    )
    IL2CPP_REGISTER_METHOD(0x0053B180, void, _GetStatisticsEntity_b__3, app::PlayFabStatistics_c_DisplayClass15_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(
        0x0053B350,
        void,
        _GetStatisticsEntity_b__4,
        app::PlayFabStatistics_c_DisplayClass15_0* this_ptr,
        app::ExecuteCloudScriptResult* success
    )
    IL2CPP_REGISTER_METHOD(0x0053B560, void, _GetStatisticsEntity_b__5, app::PlayFabStatistics_c_DisplayClass15_0* this_ptr, app::PlayFabError* error)
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass15_0

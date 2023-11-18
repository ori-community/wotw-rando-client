#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass11_0.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass11_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabStatistics_c_DisplayClass11_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00538FB0, void, _AwardOnServer_b__0, (app::PlayFabStatistics_c_DisplayClass11_0 * this_ptr, app::ExecuteCloudScriptResult* success))
    IL2CPP_REGISTER_METHOD(0x00539350, bool, _AwardOnServer_b__2, (app::PlayFabStatistics_c_DisplayClass11_0 * this_ptr, app::CacheData* o))
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass11_0

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SystemIntegration_CacheData_.h>
#include <Modloader/app/structs/IDataProvider.h>

namespace app::classes::SystemIntegration::Synchronizer::Diff {
    IL2CPP_REGISTER_METHOD(0x00534B00, app::List_1_SystemIntegration_CacheData_*, AwardedOnlyLocally, (app::IDataProvider * provider))
    IL2CPP_REGISTER_METHOD(0x00534E20, app::List_1_SystemIntegration_CacheData_*, AwardedOnlyRemotely, (app::IDataProvider * provider))
    IL2CPP_REGISTER_METHOD(0x00535140, void, cctor, ())
} // namespace app::classes::SystemIntegration::Synchronizer::Diff

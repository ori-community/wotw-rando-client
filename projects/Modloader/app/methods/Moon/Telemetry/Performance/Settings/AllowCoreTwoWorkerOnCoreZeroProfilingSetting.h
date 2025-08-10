#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllowCoreTwoWorkerOnCoreZeroProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::AllowCoreTwoWorkerOnCoreZeroProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3AE80, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetState, app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3AE90, void, SetState, app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AllowCoreTwoWorkerOnCoreZeroProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::AllowCoreTwoWorkerOnCoreZeroProfilingSetting

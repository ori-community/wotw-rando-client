#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxQualityModeManager.h>
#include <Modloader/app/structs/XboxQualityModeManager_QualityMode__Enum.h>

namespace app::classes::MoonDataPlatform::XboxQualityModeManager {
    IL2CPP_REGISTER_METHOD(0x00F49900, bool, get_DisableVsyncForPerformanceMode, )
    IL2CPP_REGISTER_METHOD(0x00F499A0, void, set_DisableVsyncForPerformanceMode, bool value)
    IL2CPP_REGISTER_METHOD(0x00F49B30, app::XboxQualityModeManager_QualityMode__Enum, get_CurrentMode, )
    IL2CPP_REGISTER_METHOD(0x00F49BD0, void, set_CurrentMode, app::XboxQualityModeManager_QualityMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00F49C80, void, ApplyMode, app::XboxQualityModeManager_QualityMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XboxQualityModeManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F49FA0, void, cctor, )
} // namespace app::classes::MoonDataPlatform::XboxQualityModeManager

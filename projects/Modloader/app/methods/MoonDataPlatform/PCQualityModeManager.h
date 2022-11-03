#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonDataPlatform::PCQualityModeManager {
    IL2CPP_REGISTER_METHOD(0x00F485D0, app::PCQualityModeManager_QualityMode__Enum, get_CurrentMode, ())
    IL2CPP_REGISTER_METHOD(0x00F48670, void, set_CurrentMode, (app::PCQualityModeManager_QualityMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F48740, void, ApplyMode, (app::PCQualityModeManager_QualityMode__Enum mode))
    IL2CPP_REGISTER_METHODINFO(0x0476CF68, PCQualityModeManager_ApplyMode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PCQualityModeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F48B70, void, cctor, ())
} // namespace app::classes::MoonDataPlatform::PCQualityModeManager

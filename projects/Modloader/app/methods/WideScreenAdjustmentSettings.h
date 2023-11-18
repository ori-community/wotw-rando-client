#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WideScreenAdjustmentSettings.h>
#include <Modloader/app/structs/CameraPuppetController.h>

namespace app::classes::WideScreenAdjustmentSettings {
    IL2CPP_REGISTER_METHOD(0x00573CC0, void, ApplyToPuppet, (app::WideScreenAdjustmentSettings * this_ptr, app::CameraPuppetController* puppet))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WideScreenAdjustmentSettings * this_ptr))
} // namespace app::classes::WideScreenAdjustmentSettings

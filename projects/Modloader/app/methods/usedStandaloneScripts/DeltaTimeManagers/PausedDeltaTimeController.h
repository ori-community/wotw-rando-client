#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PausedDeltaTimeController.h>

namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::PausedDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x03125850, void, PostTimeManagerUpdate, (app::PausedDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PausedDeltaTimeController * this_ptr))
} // namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::PausedDeltaTimeController

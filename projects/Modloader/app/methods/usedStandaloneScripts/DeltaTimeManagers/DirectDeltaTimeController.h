#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectDeltaTimeController.h>

namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::DirectDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x031253F0, void, PostTimeManagerUpdate, (app::DirectDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DirectDeltaTimeController * this_ptr))
} // namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::DirectDeltaTimeController

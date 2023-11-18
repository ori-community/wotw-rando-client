#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenarioRecorderTracker.h>

namespace app::classes::ScenarioRecorderTracker {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScenarioRecorderTracker * this_ptr))
}

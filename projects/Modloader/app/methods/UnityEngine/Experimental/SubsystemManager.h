#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Experimental::SubsystemManager {
    IL2CPP_REGISTER_METHOD(0x03176510, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x03176560, void, ReportSingleSubsystemAnalytics, (app::String * id))
    IL2CPP_REGISTER_METHOD(0x03176510, void, StaticConstructScriptingClassMap, ())
} // namespace app::classes::UnityEngine::Experimental::SubsystemManager

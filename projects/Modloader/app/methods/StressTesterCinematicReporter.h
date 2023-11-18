#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/StressTesterCinematicReporter.h>

namespace app::classes::StressTesterCinematicReporter {
    IL2CPP_REGISTER_METHOD(0x0066EB20, app::CameraController_1*, get_Controller, (app::StressTesterCinematicReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0066EBD0, bool, get_ShowDebug, ())
    IL2CPP_REGISTER_METHOD(0x0066EC50, void, set_ShowDebug, (bool value))
    IL2CPP_REGISTER_METHOD(0x0066ED40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0066EDC0, void, OnGUI, (app::StressTesterCinematicReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00670410, bool, get_IsCharacterInputLocked, (app::StressTesterCinematicReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006708E0, void, ctor, (app::StressTesterCinematicReporter * this_ptr))
} // namespace app::classes::StressTesterCinematicReporter

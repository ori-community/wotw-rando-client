#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DoorSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline *, get_Transition, (app::DoorSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::DoorSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DoorSetupData * this_ptr))
}

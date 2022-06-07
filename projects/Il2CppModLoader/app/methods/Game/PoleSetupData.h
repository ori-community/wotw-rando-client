#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::PoleSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline *, get_Transition, (app::PoleSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855D10, float, get_DesiredValue, (app::PoleSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PoleSetupData * this_ptr))
}

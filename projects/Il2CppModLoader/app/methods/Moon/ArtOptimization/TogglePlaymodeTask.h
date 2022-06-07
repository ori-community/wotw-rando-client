#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::TogglePlaymodeTask {
    IL2CPP_REGISTER_METHOD(0x0052A040, void, ctor, (app::TogglePlaymodeTask * this_ptr, bool playmode_state))
    IL2CPP_REGISTER_METHOD(0x00CB3680, void, Update, (app::TogglePlaymodeTask * this_ptr))
}

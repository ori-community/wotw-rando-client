#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AchievementToDisplay {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::AchievementToDisplay__Boxed * this_ptr, app::String * text, app::Texture * icon))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementToDisplay__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>

namespace app::classes::AchievementToDisplay {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::AchievementToDisplay__Boxed * this_ptr, app::String* text, app::Texture* icon))
}

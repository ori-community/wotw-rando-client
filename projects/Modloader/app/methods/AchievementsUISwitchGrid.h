#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementsUISwitchGrid.h>

namespace app::classes::AchievementsUISwitchGrid {
    IL2CPP_REGISTER_METHOD(0x004BF570, void, Start, (app::AchievementsUISwitchGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BF910, void, DehighlightSelection, (app::AchievementsUISwitchGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BFA00, void, GenerateGrid, (app::AchievementsUISwitchGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C0240, void, ClearGrid, (app::AchievementsUISwitchGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C04E0, void, ctor, (app::AchievementsUISwitchGrid * this_ptr))
} // namespace app::classes::AchievementsUISwitchGrid

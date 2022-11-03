#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RaceMenuScreenDifficultyLabel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::RaceMenuScreenDifficultyLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D0F0, void, UpdateLabel, (app::RaceMenuScreenDifficultyLabel * this_ptr, app::DifficultyMode__Enum difficulty))
    IL2CPP_REGISTER_METHOD(0x0070D290, app::MessageDescriptor, DifficultyModeToMessage, (app::RaceMenuScreenDifficultyLabel * this_ptr, app::DifficultyMode__Enum difficulty))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceMenuScreenDifficultyLabel * this_ptr))
} // namespace app::classes::RaceMenuScreenDifficultyLabel

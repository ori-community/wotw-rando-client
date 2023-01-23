#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DifficultyToggler.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::DifficultyToggler {
    IL2CPP_REGISTER_METHOD(0x00B92A20, app::String*, get_Path, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92AA0, app::String*, get_Name, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92B20, app::String*, get_HelpText, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Column, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92BA0, app::String__Array*, get_ToggleOptions, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92DA0, int32_t, get_CurrentToggleOptionId, (app::DifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B92E30, void, set_CurrentToggleOptionId, (app::DifficultyToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DifficultyToggler * this_ptr))
} // namespace app::classes::DifficultyToggler

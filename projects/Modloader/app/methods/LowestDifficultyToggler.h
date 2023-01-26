#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LowestDifficultyToggler.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::LowestDifficultyToggler {
    IL2CPP_REGISTER_METHOD(0x009F3F90, app::String*, get_Path, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F4010, app::String*, get_Name, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F4090, app::String*, get_HelpText, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F4110, app::String__Array*, get_ToggleOptions, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F4310, int32_t, get_CurrentToggleOptionId, (app::LowestDifficultyToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F43A0, void, set_CurrentToggleOptionId, (app::LowestDifficultyToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LowestDifficultyToggler * this_ptr))
} // namespace app::classes::LowestDifficultyToggler

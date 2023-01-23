#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RaceMenuScreenPlaceholder.h>

namespace app::classes::RaceMenuScreenPlaceholder {
    IL2CPP_REGISTER_METHOD(0x007101C0, void, Awake, (app::RaceMenuScreenPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceMenuScreenPlaceholder * this_ptr))
} // namespace app::classes::RaceMenuScreenPlaceholder

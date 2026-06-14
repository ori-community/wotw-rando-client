#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings.h>

namespace app::classes::KwolokBossLocomotion_StayAtRangeSettings {
    IL2CPP_REGISTER_METHOD(
        0x012E7CD0,
        void,
        CopyFrom,
        app::KwolokBossLocomotion_StayAtRangeSettings* this_ptr,
        app::KwolokBossLocomotion_StayAtRangeSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x012E7D10, void, ctor, app::KwolokBossLocomotion_StayAtRangeSettings* this_ptr)
} // namespace app::classes::KwolokBossLocomotion_StayAtRangeSettings

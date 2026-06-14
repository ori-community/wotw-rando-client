#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BowArrowTrajectory.h>

namespace app::classes::BowArrowTrajectory {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Awake, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47D10, void, Start, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, HideTrajectory, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47E40, void, ShowTrajectory, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D480F0, void, Update, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D482B0, void, CalculateTrajectory, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D48510, void, UpdateLineRendererPoints, app::BowArrowTrajectory* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BowArrowTrajectory* this_ptr)
} // namespace app::classes::BowArrowTrajectory

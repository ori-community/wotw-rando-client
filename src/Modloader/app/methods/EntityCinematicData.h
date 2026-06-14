#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityCinematicData.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::EntityCinematicData {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::MoonAnimation*, get_Animation, app::EntityCinematicData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Animation, app::EntityCinematicData* this_ptr, app::MoonAnimation* value)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Scheduled, app::EntityCinematicData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Scheduled, app::EntityCinematicData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C8CD40, bool, get_IsActive, app::EntityCinematicData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8CE20, void, ScheduleAnimation, app::EntityCinematicData* this_ptr, app::MoonAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x00C8CE30, void, Play_1, app::EntityCinematicData* this_ptr, app::MoonAnimator* animator, app::MoonAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x00C8CE40, void, Play_2, app::EntityCinematicData* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x00C8CF80, void, Stop, app::EntityCinematicData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C8CFB0, void, Clear, app::EntityCinematicData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EntityCinematicData* this_ptr)
} // namespace app::classes::EntityCinematicData

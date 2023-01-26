#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinBowPuppet.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinBowPuppet {
    IL2CPP_REGISTER_METHOD(0x00DA2340, int32_t, get_Id, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2350, app::MoonTimeline__Array*, get_GroundTimelines, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA25A0, app::MoonTimeline__Array*, get_AirTimelines, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA27F0, app::MoonTimeline*, GetDrawTimeline_1, (app::SeinBowPuppet * this_ptr, bool is_on_ground, bool rapid))
    IL2CPP_REGISTER_METHOD(0x00DA2820, app::MoonTimeline*, GetRecoverTimeline_1, (app::SeinBowPuppet * this_ptr, bool is_on_ground, bool rapid))
    IL2CPP_REGISTER_METHOD(0x00DA2850, app::MoonTimeline*, GetDrawTimeline_2, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA2870, app::MoonTimeline*, GetDrawRapidTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA2890, app::MoonTimeline*, GetRecoverTimeline_2, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA28B0, app::MoonTimeline*, GetRecoverRapidTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA28D0, app::MoonTimeline*, GetPullChargeTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA28F0, app::MoonTimeline*, GetChargeRecoverTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA2910, app::MoonAnimation*, GetAimLoopAnimationBow, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00DA2930, app::MoonFloat*, GetArrowChargeAmount, (app::SeinBowPuppet * this_ptr, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00B2A180, app::GameObject*, get_CurrentArrow, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2950, void, SetCurrentArrow, (app::SeinBowPuppet * this_ptr, app::GameObject* arrow))
    IL2CPP_REGISTER_METHOD(0x00DA2AC0, app::Transform*, get_ArrowTransform, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2BE0, app::Vector3, get_TargetRapidArrowScale, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2C00, app::Vector3, get_TargetArrowScale, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2C20, app::Vector3, get_TargetChargeArrowScale, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2C40, app::MoonAnimator*, get_WeaponAnimator, (app::SeinBowPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DA2D20, void, ctor, (app::SeinBowPuppet * this_ptr))
} // namespace app::classes::SeinBowPuppet

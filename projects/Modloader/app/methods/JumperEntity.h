#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JumperEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::JumperEntity {
    IL2CPP_REGISTER_METHOD(0x00E59A40, bool, get_Aggro, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59A50, void, set_Aggro, (app::JumperEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E59A60, bool, get_IsFacingTarget, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59AE0, void, Start, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59AF0, bool, IsGoingToFinish, (app::JumperEntity * this_ptr, app::MoonTimeline* timeline, app::AnimationPlayer* anim, float time_to_end))
    IL2CPP_REGISTER_METHOD(0x00E59B80, void, OnFixedUpdate, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59E50, void, OnDamageReceived, (app::JumperEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00E59E90, bool, CheckObstacle, (app::JumperEntity * this_ptr, app::Vector3 position, app::Vector3 direction, float distance))
    IL2CPP_REGISTER_METHOD(0x00E59FA0, float, ObstacleDistance, (app::JumperEntity * this_ptr, app::Vector3 position, app::Vector3 direction, float distance))
    IL2CPP_REGISTER_METHOD(0x00E5A0F0, void, ResetEntity, (app::JumperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5A220, void, ctor, (app::JumperEntity * this_ptr))
} // namespace app::classes::JumperEntity

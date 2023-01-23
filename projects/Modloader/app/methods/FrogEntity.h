#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FrogEntity.h>
#include <Modloader/app/structs/FrogGroup.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::FrogEntity {
    IL2CPP_REGISTER_METHOD(0x01646F60, bool, CanAnySeeCharacter, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016470F0, bool, get_ShouldFollowOri, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016471A0, bool, get_IsPartOfGroup, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647250, app::FrogGroup*, get_Group, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647260, void, set_Group, (app::FrogEntity * this_ptr, app::FrogGroup* value))
    IL2CPP_REGISTER_METHOD(0x01647270, void, OnAwake, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647280, void, ResolveDamage, (app::FrogEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x016472D0, void, OnFixedUpdate, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647600, void, ResetEntity, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016476E0, void, OnCacheSerializedComponents, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016477C0, void, TemporarlyDisableDieOnTouch, (app::FrogEntity * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01647AE0, void, QuickInstantKill, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647260, void, SetGroup, (app::FrogEntity * this_ptr, app::FrogGroup* group))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ModifyKickbackForce, (app::FrogEntity * this_ptr, app::Vector3 force, app::Damage* damage, bool apply_death_modification))
    IL2CPP_REGISTER_METHOD(0x01647BD0, void, ctor, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01647C70, void, _TemporarlyDisableDieOnTouch_b__22_0, (app::FrogEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B478, FrogEntity__TemporarlyDisableDieOnTouch_b__22_0__MethodInfo)
} // namespace app::classes::FrogEntity

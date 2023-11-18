#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpikeSlugDeathReaction.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpikeSlugDeathReaction {
    IL2CPP_REGISTER_METHOD(0x011C7BD0, void, OnCacheSerializedComponents, (app::SpikeSlugDeathReaction * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x011C7CB0, void, OnInitializeTask, (app::SpikeSlugDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C7EA0, void, ResetTimeline, (app::SpikeSlugDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C8100, void, OnHitGround, (app::SpikeSlugDeathReaction * this_ptr, app::Vector3 pos, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x011C8110, void, StartDeathTimeline, (app::SpikeSlugDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C82D0, void, ModifyDeathKickbackForce, (app::SpikeSlugDeathReaction * this_ptr, app::Damage* damage, float min_boost, float min_magntiude, float min_up_direction))
    IL2CPP_REGISTER_METHOD(0x011C85B0, void, OnEnterTask, (app::SpikeSlugDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C8AF0, void, EndReaction, (app::SpikeSlugDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C8BB0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpikeSlugDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C8F30, void, OnExitTask, (app::SpikeSlugDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C8FF0, void, PlayShake, (app::SpikeSlugDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C90F0, void, ctor, (app::SpikeSlugDeathReaction * this_ptr))
} // namespace app::classes::SpikeSlugDeathReaction

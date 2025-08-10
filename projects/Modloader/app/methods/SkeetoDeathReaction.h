#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoDeathReaction.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SkeetoDeathReaction {
    IL2CPP_REGISTER_METHOD(0x0074DC90, app::SkeetoLocomotion*, get_Locomotion, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074DD70, void, OnCacheSerializedComponents, app::SkeetoDeathReaction* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x0074DE50, void, OnInitializeTask, app::SkeetoDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074DFE0, void, ResetTimeline_1, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074E240, void, OnHitGround, app::SkeetoDeathReaction* this_ptr, app::Vector3 pos, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x0074E250, void, StartDeathTimeline, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074E3E0, void, OnLanded, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074E4D0, void, OnEnterTask, app::SkeetoDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074E850, void, OnFinishedDeathStart, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074E3E0, void, EndReaction, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074E890, app::BehaviourStatus__Enum, OnExecuteTask, app::SkeetoDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074EA50, void, OnExitTask, app::SkeetoDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0074EAA0, void, EnterDrown, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074EFA0, void, ExitDrown, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074EFB0, bool, InWater, app::SkeetoDeathReaction* this_ptr, float check_offset)
    IL2CPP_REGISTER_METHOD(0x0074F1A0, void, UpdateDrown, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074F3E0, void, StartTimeline, app::SkeetoDeathReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x0074F410, void, ResetTimeline_2, app::SkeetoDeathReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x0074F630, void, ctor, app::SkeetoDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, _EnterDrown_b__30_0, app::SkeetoDeathReaction* this_ptr)
} // namespace app::classes::SkeetoDeathReaction

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShooterHitReactionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LaserShooterHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F13C60, void, HandleReasonToNotInterrupt, (app::LaserShooterHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00F13E60, void, OnEnterTask, (app::LaserShooterHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, (app::LaserShooterHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F13F80, void, ctor, (app::LaserShooterHitReactionBehaviour * this_ptr))
} // namespace app::classes::LaserShooterHitReactionBehaviour

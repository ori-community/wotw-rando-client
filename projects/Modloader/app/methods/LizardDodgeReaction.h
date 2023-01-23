#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LizardDodgeReaction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LizardDodgeReaction {
    IL2CPP_REGISTER_METHOD(0x00FAC100, void, OnInitializeTask, (app::LizardDodgeReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAC1C0, void, OnEnterTask, (app::LizardDodgeReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::LizardDodgeReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FAC3F0, void, OnExitTask, (app::LizardDodgeReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::LizardDodgeReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAC420, bool, CanInterrupt, (app::LizardDodgeReaction * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00FAC430, void, StartDodgeRoll, (app::LizardDodgeReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionRollBackModifier, (app::LizardDodgeReaction * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04787ED0, LizardDodgeReaction_RootMotionRollBackModifier__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FAC740, void, ctor, (app::LizardDodgeReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, _StartDodgeRoll_b__14_0, (app::LizardDodgeReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472DCC0, LizardDodgeReaction__StartDodgeRoll_b__14_0__MethodInfo)
} // namespace app::classes::LizardDodgeReaction

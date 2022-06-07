#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarHitReaction {
    IL2CPP_REGISTER_METHOD(0x0147D580, void, OnInitializeTask, (app::MortarHitReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147D650, void, OnEnterTask, (app::MortarHitReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147D7C0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MortarHitReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147D870, void, OnExitTask, (app::MortarHitReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147D8A0, void, OnResetTask, (app::MortarHitReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0147D8D0, void, HandleReasonToNotInterrupt, (app::MortarHitReaction * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent * reaction_event))
    IL2CPP_REGISTER_METHOD(0x0147DA50, void, PlayAdditiveTimeline, (app::MortarHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147DD80, void, ctor, (app::MortarHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, _PlayAdditiveTimeline_b__9_1, (app::MortarHitReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047403F8, MortarHitReaction__PlayAdditiveTimeline_b__9_1__MethodInfo)
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::ButtonInteractionTransition {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::InteractionBidingButton__Enum, get_Button, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::InteractionBinding*, get_InteractionBinding, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Action_1_IContext_*, get_OnActivated, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OnActivated, (app::ButtonInteractionTransition * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Action_1_IContext_*, get_OnFinished, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnFinished, (app::ButtonInteractionTransition * this_ptr, app::Action_1_IContext_* value))
    IL2CPP_REGISTER_METHOD(0x0198B150, app::IInteractionNode*, get_TransitionDestination, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198B210, app::IMessageProvider*, get_ResolvedMessage, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198B2A0, void, OnOwnerEnter, (app::ButtonInteractionTransition * this_ptr, app::IInteractionNode* owner))
    IL2CPP_REGISTER_METHOD(0x0198B560, void, OnOwnerExit, (app::ButtonInteractionTransition * this_ptr, app::IInteractionNode* owner))
    IL2CPP_REGISTER_METHOD(0x0198B5F0, void, OnButtonPressed, (app::ButtonInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D388, ButtonInteractionTransition_OnButtonPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, Validate, (app::ButtonInteractionTransition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0198B690, void, ctor, (app::ButtonInteractionTransition * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::ButtonInteractionTransition

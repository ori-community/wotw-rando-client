#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionNode {
    IL2CPP_REGISTER_METHOD(0x0198ECE0, app::IInteractionActor *, get_Actor, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Action_1_IContext_ *, get_OnActivated, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnActivated, (app::InteractionNode * this_ptr, app::Action_1_IContext_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Action_1_IContext_ *, get_OnFinished, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_OnFinished, (app::InteractionNode * this_ptr, app::Action_1_IContext_ * value))
    IL2CPP_REGISTER_METHOD(0x0198EDA0, void, Finalize, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198EE30, void, OnDestroy, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198EE40, void, MoonCleanup, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198EF20, app::List_1_Moon_InteractionGraph_IInteractionTransition_ *, get_Transitions, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198F1A0, app::List_1_Moon_InteractionGraph_IInteractionNodeDecorator_ *, get_Decorators, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C70, app::InteractionNodeStatus__Enum, get_InteractionNodeStatus, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_InteractionNodeStatus, (app::InteractionNode * this_ptr, app::InteractionNodeStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x0198F420, bool, get_HasInputTransitions, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::InteractionSettings *, get_InteractionSettings, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198ECE0, app::IInteractionActor *, get_ResolvedActor, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198F4B0, void, Initialize, (app::InteractionNode * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198F650, void, OnEnter, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198FC00, void, OnExit, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, GetStateId, (app::InteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198FEB0, void, ctor, (app::InteractionNode * this_ptr))
}

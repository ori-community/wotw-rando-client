#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/ConditionalInteractionTransition.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::ConditionalInteractionTransition {
    IL2CPP_REGISTER_METHOD(0x0198CE50, app::IInteractionNode*, get_TransitionDestination, (app::ConditionalInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0198CF10, app::ICondition*, get_ResolvedCondition, (app::ConditionalInteractionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, (app::ConditionalInteractionTransition * this_ptr, app::IInteractionNode* owner))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, (app::ConditionalInteractionTransition * this_ptr, app::IInteractionNode* owner))
    IL2CPP_REGISTER_METHOD(0x0198CFB0, bool, Validate, (app::ConditionalInteractionTransition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00626870, void, ctor, (app::ConditionalInteractionTransition * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::ConditionalInteractionTransition

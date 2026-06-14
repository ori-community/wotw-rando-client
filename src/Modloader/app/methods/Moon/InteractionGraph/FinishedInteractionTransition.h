#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FinishedInteractionTransition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IInteractionNode.h>

namespace app::classes::Moon::InteractionGraph::FinishedInteractionTransition {
    IL2CPP_REGISTER_METHOD(0x0198D180, app::IInteractionNode*, get_TransitionDestination, app::FinishedInteractionTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, app::FinishedInteractionTransition* this_ptr, app::IInteractionNode* owner)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, app::FinishedInteractionTransition* this_ptr, app::IInteractionNode* owner)
    IL2CPP_REGISTER_METHOD(0x0198D240, bool, Validate, app::FinishedInteractionTransition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FinishedInteractionTransition* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::FinishedInteractionTransition

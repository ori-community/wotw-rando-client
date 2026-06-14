#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeStateOnConditionInteractionNodeDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::ChangeStateOnConditionInteractionNodeDecorator {
    IL2CPP_REGISTER_METHOD(0x01103430, void, OnDecoratedNodeEnter, app::ChangeStateOnConditionInteractionNodeDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ChangeStateOnConditionInteractionNodeDecorator* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::ChangeStateOnConditionInteractionNodeDecorator

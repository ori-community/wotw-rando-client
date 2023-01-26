#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmptyInteractionNode.h>

namespace app::classes::Moon::InteractionGraph::EmptyInteractionNode {
    IL2CPP_REGISTER_METHOD(0x0198D160, void, OnEnter, (app::EmptyInteractionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, (app::EmptyInteractionNode * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::EmptyInteractionNode

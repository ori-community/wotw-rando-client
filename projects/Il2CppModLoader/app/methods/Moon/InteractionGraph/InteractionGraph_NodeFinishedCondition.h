#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::InteractionGraph_NodeFinishedCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::InteractionGraph_NodeFinishedCondition * this_ptr, app::InteractionGraph* graph))
    IL2CPP_REGISTER_METHOD(0x0198EC30, bool, Validate, (app::InteractionGraph_NodeFinishedCondition * this_ptr, app::IContext* context))
} // namespace app::classes::Moon::InteractionGraph::InteractionGraph_NodeFinishedCondition

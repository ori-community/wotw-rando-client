#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/InteractionGraph.h>
#include <Modloader/app/structs/InteractionGraph_InteractionGraphContext.h>

namespace app::classes::Moon::InteractionGraph::InteractionGraph_InteractionGraphContext {
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        Init,
        app::InteractionGraph_InteractionGraphContext* this_ptr,
        app::InteractionGraph* graph,
        app::IInteractionNode* node
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InteractionGraph_InteractionGraphContext* this_ptr)
} // namespace app::classes::Moon::InteractionGraph::InteractionGraph_InteractionGraphContext

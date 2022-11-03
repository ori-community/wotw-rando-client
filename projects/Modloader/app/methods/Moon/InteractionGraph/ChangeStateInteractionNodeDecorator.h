#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator {
    IL2CPP_REGISTER_METHOD(0x0198C080, void, OnDecoratedNodeEnter, (app::ChangeStateInteractionNodeDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDecoratedNodeExit, (app::ChangeStateInteractionNodeDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChangeStateInteractionNodeDecorator * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionNodeContext.h>

namespace app::classes::Moon::InteractionGraph::InteractionNodeContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InteractionNodeContext* this_ptr)
}

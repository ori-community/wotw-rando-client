#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionTransition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::InteractionGraph::InteractionTransition {
    IL2CPP_REGISTER_METHOD(0x019907A0, bool, Validate, (app::InteractionTransition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteractionTransition * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::InteractionTransition

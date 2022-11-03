#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::AlwaysTrueCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Validate, (app::AlwaysTrueCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AlwaysTrueCondition * this_ptr))
} // namespace app::classes::Moon::InteractionGraph::AlwaysTrueCondition

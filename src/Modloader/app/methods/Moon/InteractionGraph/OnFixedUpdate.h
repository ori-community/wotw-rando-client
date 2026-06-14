#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnFixedUpdate.h>

namespace app::classes::Moon::InteractionGraph::OnFixedUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnFixedUpdate* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>

namespace app::classes::Moon::Network::Web::MainThreadDispatcher {
    IL2CPP_REGISTER_METHOD(0x02E968E0, void, Init, )
    IL2CPP_REGISTER_METHOD(0x02E96980, void, Enqueue, app::Action* action, bool lock_queue)
} // namespace app::classes::Moon::Network::Web::MainThreadDispatcher

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Network::Web::MainThreadDispatcher {
    IL2CPP_REGISTER_METHOD(0x02E968E0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x02E96980, void, Enqueue, (app::Action * action, bool lock_queue))
}

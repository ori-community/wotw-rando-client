#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Network::Web::MainThreadDispatcherPlaymode {
    IL2CPP_REGISTER_METHOD(0x02E96BC0, app::MainThreadDispatcherPlaymode*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02E96E80, bool, get_HasInstane, ())
    IL2CPP_REGISTER_METHOD(0x02E96F50, void, Awake, (app::MainThreadDispatcherPlaymode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (app::MainThreadDispatcherPlaymode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E97080, void, Update, (app::MainThreadDispatcherPlaymode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E97270, void, Enqueue, (app::MainThreadDispatcherPlaymode * this_ptr, app::Action* action))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MainThreadDispatcherPlaymode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E97330, void, cctor, ())
} // namespace app::classes::Moon::Network::Web::MainThreadDispatcherPlaymode

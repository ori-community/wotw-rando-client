#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::PersistentCallGroup {
    IL2CPP_REGISTER_METHOD(0x024306B0, void, ctor, (app::PersistentCallGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02430800, void, Initialize, (app::PersistentCallGroup * this_ptr, app::InvokableCallList* invokable_list, app::UnityEventBase* unity_event_base))
} // namespace app::classes::UnityEngine::Events::PersistentCallGroup

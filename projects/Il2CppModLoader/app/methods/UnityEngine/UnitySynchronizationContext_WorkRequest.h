#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UnitySynchronizationContext_WorkRequest {
    IL2CPP_REGISTER_METHOD(0x0013C860, void, ctor, (app::UnitySynchronizationContext_WorkRequest__Boxed * this_ptr, app::SendOrPostCallback * callback, app::Object * state, app::ManualResetEvent * wait_handle))
    IL2CPP_REGISTER_METHOD(0x00229330, void, Invoke, (app::UnitySynchronizationContext_WorkRequest__Boxed * this_ptr))
}

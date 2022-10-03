#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::RegisteredWaitHandle {
    IL2CPP_REGISTER_METHOD(0x0232A0F0, void, ctor, (app::RegisteredWaitHandle * this_ptr, app::WaitHandle* wait_object, app::WaitOrTimerCallback* callback, app::Object* state, app::TimeSpan timeout, bool execute_only_once))
    IL2CPP_REGISTER_METHOD(0x0232A290, void, Wait, (app::RegisteredWaitHandle * this_ptr, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x04790C30, RegisteredWaitHandle_Wait__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232A960, void, DoCallBack, (app::RegisteredWaitHandle * this_ptr, app::Object* timed_out))
    IL2CPP_REGISTER_METHODINFO(0x0476E660, RegisteredWaitHandle_DoCallBack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232AB40, bool, Unregister, (app::RegisteredWaitHandle * this_ptr, app::WaitHandle* wait_object))
} // namespace app::classes::System::Threading::RegisteredWaitHandle

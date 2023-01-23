#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NetworkTest_sendTelemetryCoroutine_d_15.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::NetworkTest__sendTelemetryCoroutine_d__15 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005F9DB0, bool, MoveNext, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FA010, void, IEnumerator_Reset, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F6C0, NetworkTest_sendTelemetryCoroutine_d_15_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::NetworkTest_sendTelemetryCoroutine_d_15 * this_ptr))
} // namespace app::classes::NetworkTest__sendTelemetryCoroutine_d__15

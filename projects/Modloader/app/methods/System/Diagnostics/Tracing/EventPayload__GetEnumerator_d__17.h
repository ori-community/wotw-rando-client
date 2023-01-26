#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventPayload_GetEnumerator_d_17.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EventPayload__GetEnumerator_d__17 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::EventPayload_GetEnumerator_d_17 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::EventPayload_GetEnumerator_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174D240, bool, MoveNext, (app::EventPayload_GetEnumerator_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::KeyValuePair_2_System_String_System_Object_, IEnumerator_KeyValuePair_string__object___get_Current, (app::EventPayload_GetEnumerator_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174D3A0, void, IEnumerator_Reset, (app::EventPayload_GetEnumerator_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174D3F0, app::Object*, IEnumerator_get_Current, (app::EventPayload_GetEnumerator_d_17 * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EventPayload__GetEnumerator_d__17

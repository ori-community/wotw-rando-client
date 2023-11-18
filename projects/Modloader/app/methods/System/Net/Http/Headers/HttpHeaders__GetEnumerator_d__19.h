#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpHeaders_GetEnumerator_d_19.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x02D0D250, void, IDisposable_Dispose, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D290, bool, MoveNext, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D550, void, __m__Finally1, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::KeyValuePair_2_System_String_IEnumerable_1_System_String_, IEnumerator_KeyValuePair_string__IEnumerable_string____get_Current, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D5E0, void, IEnumerator_Reset, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D0D630, app::Object*, IEnumerator_get_Current, (app::HttpHeaders_GetEnumerator_d_19 * this_ptr))
} // namespace app::classes::System::Net::Http::Headers::HttpHeaders__GetEnumerator_d__19

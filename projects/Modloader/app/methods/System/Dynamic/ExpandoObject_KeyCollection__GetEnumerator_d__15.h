#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_KeyCollection_GetEnumerator_d_15.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::ExpandoObject_KeyCollection__GetEnumerator_d__15 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F90630, bool, MoveNext, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, IEnumerator_string__get_Current, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F90840, void, IEnumerator_Reset, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::ExpandoObject_KeyCollection_GetEnumerator_d_15 * this_ptr))
} // namespace app::classes::System::Dynamic::ExpandoObject_KeyCollection__GetEnumerator_d__15

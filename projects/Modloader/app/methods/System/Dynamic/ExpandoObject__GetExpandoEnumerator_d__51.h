#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_GetExpandoEnumerator_d_51.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Dynamic::ExpandoObject__GetExpandoEnumerator_d__51 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8F3E0, bool, MoveNext, app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C3DD30,
        app::KeyValuePair_2_System_String_System_Object_,
        IEnumerator_KeyValuePair_string__object___get_Current,
        app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01F8F5F0, void, IEnumerator_Reset, app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8F640, app::Object*, IEnumerator_get_Current, app::ExpandoObject_GetExpandoEnumerator_d_51* this_ptr)
} // namespace app::classes::System::Dynamic::ExpandoObject__GetExpandoEnumerator_d__51

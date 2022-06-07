#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject__GetExpandoEnumerator_d__51 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8F3E0, bool, MoveNext, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781B00, ExpandoObject_GetExpandoEnumerator_d_51_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::KeyValuePair_2_System_String_System_Object_, IEnumerator_KeyValuePair_string__object___get_Current, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8F5F0, void, IEnumerator_Reset, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E848, ExpandoObject_GetExpandoEnumerator_d_51_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F8F640, app::Object *, IEnumerator_get_Current, (app::ExpandoObject_GetExpandoEnumerator_d_51 * this_ptr))
}

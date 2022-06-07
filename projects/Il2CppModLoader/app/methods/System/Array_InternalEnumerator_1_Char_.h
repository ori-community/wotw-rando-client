#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_Char_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B2D30, uint16_t, get_Current, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778F18, Array_InternalEnumerator_1_Char__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B2EB0, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_Char___Boxed * this_ptr))
}

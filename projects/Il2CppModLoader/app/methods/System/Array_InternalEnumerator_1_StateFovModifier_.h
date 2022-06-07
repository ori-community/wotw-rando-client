#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_StateFovModifier_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B1250, app::StateFovModifier, get_Current, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047509A0, Array_InternalEnumerator_1_StateFovModifier__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B1280, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_StateFovModifier___Boxed * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_UnityEngine_Ray_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001768B0, app::Ray, get_Current, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737FD0, Array_InternalEnumerator_1_UnityEngine_Ray__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001768E0, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UnityEngine_Ray___Boxed * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Array_InternalEnumerator_1_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019BDD0, int32_t, get_Current, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047696D8, Array_InternalEnumerator_1_Int32__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019BF50, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_Int32___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_Int32_

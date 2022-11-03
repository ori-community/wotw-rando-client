#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::Iterator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Current, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, app::Object*, IEnumerator_get_Current, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980470, void, Dispose_1, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980530, void, Dispose_2, (app::Iterator_1_System_Object_ * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029805F0, void, IEnumerator_Reset, (app::Iterator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790A38, Iterator_1_System_Object__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::IO::Iterator_1_System_Object_

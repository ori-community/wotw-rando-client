#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Byte_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Byte_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, uint8_t, get_Current, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B4A0, void, Dispose, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_Byte_*, GetEnumerator, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B4B0, app::Object*, IEnumerator_get_Current, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B560, void, IEnumerator_Reset, (app::Enumerable_Iterator_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A158, Enumerable_Iterator_1_System_Byte__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Byte_

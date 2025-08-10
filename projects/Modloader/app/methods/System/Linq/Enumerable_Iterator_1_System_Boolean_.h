#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_Boolean_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Current, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298B4A0, void, Dispose, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_Boolean_*, GetEnumerator, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298B4B0, app::Object*, IEnumerator_get_Current, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298B510, void, IEnumerator_Reset, app::Enumerable_Iterator_1_System_Boolean_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Boolean_

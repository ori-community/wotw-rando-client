#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int32Enum_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::Int32Enum__Enum, get_Current, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B7D0, void, Dispose, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_Int32Enum_*, GetEnumerator, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B7E0, app::Object*, IEnumerator_get_Current, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B890, void, IEnumerator_Reset, (app::Enumerable_Iterator_1_System_Int32Enum_ * this_ptr))
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Int32Enum_

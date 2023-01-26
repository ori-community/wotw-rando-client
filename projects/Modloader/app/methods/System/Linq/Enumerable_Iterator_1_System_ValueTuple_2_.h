#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_ValueTuple_2__7.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::ValueTuple_2_Int32_Object_, get_Current, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B600, void, Dispose, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_ValueTuple_2__7*, GetEnumerator, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B620, app::Object*, IEnumerator_get_Current, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298BA20, void, IEnumerator_Reset, (app::Enumerable_Iterator_1_System_ValueTuple_2_ * this_ptr))
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_System_ValueTuple_2_

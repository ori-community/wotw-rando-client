#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02980400, void, ctor, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Current, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B7D0, void, Dispose, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02980540, app::IEnumerator_1_System_Single_*, GetEnumerator, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B960, app::Object*, IEnumerator_get_Current, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0298B9D0, void, IEnumerator_Reset, (app::Enumerable_Iterator_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759700, Enumerable_Iterator_1_System_Single__System_Collections_IEnumerator_Reset__MethodInfo)
} // namespace app::classes::System::Linq::Enumerable_Iterator_1_System_Single_

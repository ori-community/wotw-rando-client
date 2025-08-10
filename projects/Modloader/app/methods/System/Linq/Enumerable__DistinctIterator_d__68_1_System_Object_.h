#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_DistinctIterator_d_68_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable__DistinctIterator_d__68_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::Object*,
        System_Collections_Generic_IEnumerator_TSource__get_Current,
        app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225B170, void, ctor, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x01D09730, void, IDisposable_Dispose, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029866F0, bool, MoveNext, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02986A20, void, __m__Finally1, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02986AC0, void, IEnumerator_Reset, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02986B10,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_TSource__GetEnumerator,
        app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02986CA0, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_DistinctIterator_d_68_1_System_Object_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable__DistinctIterator_d__68_1_System_Object_

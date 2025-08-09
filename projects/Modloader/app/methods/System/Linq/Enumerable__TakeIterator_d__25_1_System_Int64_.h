#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_TakeIterator_d_25_1_System_Int64_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Int64__1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable__TakeIterator_d__25_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x0225B170, void, ctor, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x01D09730, void, IDisposable_Dispose, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02989EB0, bool, MoveNext, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298A0B0, void, __m__Finally1, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        int64_t,
        System_Collections_Generic_IEnumerator_TSource__get_Current,
        app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298A150, void, IEnumerator_Reset, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02989650, app::Object*, IEnumerator_get_Current, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02989D20,
        app::IEnumerator_1_System_Int64__1*,
        System_Collections_Generic_IEnumerable_TSource__GetEnumerator,
        app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x019DF3A0, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_TakeIterator_d_25_1_System_Int64_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable__TakeIterator_d__25_1_System_Int64_

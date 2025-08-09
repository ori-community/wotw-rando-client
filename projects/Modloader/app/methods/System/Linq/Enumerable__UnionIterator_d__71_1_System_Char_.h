#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_UnionIterator_d_71_1_System_Char_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Char_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable__UnionIterator_d__71_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02984B50, void, ctor, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x02985FF0, void, IDisposable_Dispose, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298A490, bool, MoveNext, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298A8D0, void, __m__Finally1, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298A970, void, __m__Finally2, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0298AA10,
        char16_t,
        System_Collections_Generic_IEnumerator_TSource__get_Current,
        app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298AA20, void, IEnumerator_Reset, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0298AA70, app::Object*, IEnumerator_get_Current, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0298AAC0,
        app::IEnumerator_1_System_Char_*,
        System_Collections_Generic_IEnumerable_TSource__GetEnumerator,
        app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0271EEB0, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_UnionIterator_d_71_1_System_Char_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable__UnionIterator_d__71_1_System_Char_

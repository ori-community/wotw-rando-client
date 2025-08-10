#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_RepeatIterator_d_117_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Enumerable__RepeatIterator_d__117_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::Object*,
        System_Collections_Generic_IEnumerator_TResult__get_Current,
        app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225B170, void, ctor, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02987940, bool, MoveNext, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02987980, void, IEnumerator_Reset, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x029879D0,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_TResult__GetEnumerator,
        app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0225B610, app::IEnumerator*, IEnumerable_GetEnumerator, app::Enumerable_RepeatIterator_d_117_1_System_Object_* this_ptr)
} // namespace app::classes::System::Linq::Enumerable__RepeatIterator_d__117_1_System_Object_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterat_2_Syst_Collectio_Gener_KeyValuePa_2_Syst_ValueTu_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__5.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Func_2_ValueTuple_2_Int32_Object_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_.h>
#include <Modloader/app/structs/IEnumerable_1_System_ValueTuple_2__4.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02894D90,
        void,
        ctor,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_ValueTuple_2_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__5* predicate,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894E00,
        app::Enumerable_Iterator_1_System_ValueTuple_2_*,
        Clone,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02897EE0,
        void,
        Dispose,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02897FA0,
        bool,
        MoveNext,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896570,
        app::IEnumerable_1_System_ValueTuple_2__4*,
        Where,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_* this_ptr,
        app::Func_2_ValueTuple_2_Int32_Object_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_

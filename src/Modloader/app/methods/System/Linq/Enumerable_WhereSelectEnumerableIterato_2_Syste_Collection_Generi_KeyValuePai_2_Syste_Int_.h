#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_Int32_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterato_2_Syste_Collection_Generi_KeyValuePa_2_Syst_Int__1.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterato_2_Syste_Collection_Generi_KeyValuePai_2_Syste_Int_.h>
#include <Modloader/app/structs/Func_2_Int32_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x02895170,
        void,
        ctor_1,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Int32_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4* predicate,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__1* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x028951E0,
        app::Enumerable_Iterator_1_System_Int32_*,
        Clone_1,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896940,
        void,
        Dispose_1,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896A00,
        bool,
        MoveNext_1,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896570,
        app::IEnumerable_1_System_Int32_*,
        Where_1,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::Func_2_Int32_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x02895170,
        void,
        ctor_2,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32__1* this_ptr,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Int32__2* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x028951E0,
        app::Enumerable_Iterator_1_System_Int32_*,
        Clone_2,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02897410,
        void,
        Dispose_2,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028974D0,
        bool,
        MoveNext_2,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896570,
        app::IEnumerable_1_System_Int32_*,
        Where_2,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32__1* this_ptr,
        app::Func_2_Int32_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_Generic_KeyValuePair_2_System_Int32_

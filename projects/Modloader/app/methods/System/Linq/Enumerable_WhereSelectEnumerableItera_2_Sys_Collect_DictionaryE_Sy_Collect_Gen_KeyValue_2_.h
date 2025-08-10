#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableItera_2_Sys_Collect_DictionaryE_Sy_Collect_Gen_KeyValue_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_DictionaryEntry_Boolean_.h>
#include <Modloader/app/structs/Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Collections_DictionaryEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x00E776D0,
        app::IEnumerable_1_System_Object_*,
        Select,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894D90,
        void,
        ctor,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::IEnumerable_1_System_Collections_DictionaryEntry_* source,
        app::Func_2_System_Collections_DictionaryEntry_Boolean_* predicate,
        app::Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894E00,
        app::Enumerable_Iterator_1_System_Collections_Generic_KeyValuePair_2_*,
        Clone,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x028962B0,
        void,
        Dispose,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896370,
        bool,
        MoveNext,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02896570,
        app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*,
        Where,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate
    )
} // namespace
  // app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_

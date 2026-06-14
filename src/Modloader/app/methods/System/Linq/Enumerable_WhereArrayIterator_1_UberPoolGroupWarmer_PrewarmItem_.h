#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array.h>

namespace app::classes::System::Linq::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_ {
    IL2CPP_REGISTER_METHOD(
        0x02893370,
        void,
        ctor,
        app::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_* this_ptr,
        app::UberPoolGroupWarmer_PrewarmItem__Array* source,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x028933C0,
        app::Enumerable_Iterator_1_UberPoolGroupWarmer_PrewarmItem_*,
        Clone,
        app::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0298C120, bool, MoveNext, app::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0298C210,
        app::IEnumerable_1_UberPoolGroupWarmer_PrewarmItem_*,
        Where,
        app::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_* this_ptr,
        app::Func_2_UberPoolGroupWarmer_PrewarmItem_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereArrayIterator_1_UberPoolGroupWarmer_PrewarmItem_

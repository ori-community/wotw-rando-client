#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_System_Object_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Boolean_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Int32Enum__Enum__Array.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00E775A0,
        app::IEnumerable_1_System_Int32_*,
        Select_1,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Func_2_Object_Int32_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E775A0,
        app::IEnumerable_1_System_Object_*,
        Select_2,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Func_2_Object_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E775A0,
        app::IEnumerable_1_System_Single_*,
        Select_3,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Func_2_Object_Single_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x00E775A0,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Select_4,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Func_2_Object_UnityEngine_Rect_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02895170,
        void,
        ctor,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Int32Enum__Enum__Array* source,
        app::Func_2_Int32Enum_Boolean_* predicate,
        app::Func_2_Int32Enum_Object_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x028951E0,
        app::Enumerable_Iterator_1_System_Object_*,
        Clone,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02895860, bool, MoveNext, app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02895050,
        app::IEnumerable_1_System_Object_*,
        Where,
        app::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_* this_ptr,
        app::Func_2_Object_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Int32Enum_System_Object_

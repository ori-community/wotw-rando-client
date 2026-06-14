#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_Boolean_.h>
#include <Modloader/app/structs/Func_2_Int32Enum_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32Enum_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x02894D90,
        void,
        ctor,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_* this_ptr,
        app::IEnumerable_1_System_Int32Enum_* source,
        app::Func_2_Int32Enum_Boolean_* predicate,
        app::Func_2_Int32Enum_UnityEngine_Rect_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894E00,
        app::Enumerable_Iterator_1_UnityEngine_Rect_*,
        Clone,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02898BA0, void, Dispose, app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02898C60, bool, MoveNext, app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02896570,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Where,
        app::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_* this_ptr,
        app::Func_2_UnityEngine_Rect_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Int32Enum_UnityEngine_Rect_

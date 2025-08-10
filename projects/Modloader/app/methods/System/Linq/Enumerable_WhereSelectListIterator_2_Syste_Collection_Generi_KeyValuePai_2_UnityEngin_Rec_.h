#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_Iterator_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterato_2_Syste_Collection_Generi_KeyValuePai_2_UnityEngin_Re__1.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_Syste_Collection_Generi_KeyValuePai_2_UnityEngin_Rec_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Object_System_Object_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(
        0x02894D90,
        void,
        ctor_1,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::List_1_KeyValuePair_2_System_Object_System_Int32_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4* predicate,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894E00,
        app::Enumerable_Iterator_1_UnityEngine_Rect_*,
        Clone_1,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0289AE20,
        bool,
        MoveNext_1,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0289A7C0,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Where_1,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_* this_ptr,
        app::Func_2_UnityEngine_Rect_Boolean_* predicate
    )
    IL2CPP_REGISTER_METHOD(
        0x02894D90,
        void,
        ctor_2,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::List_1_KeyValuePair_2_System_Object_System_Object_* source,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate,
        app::Func_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* selector
    )
    IL2CPP_REGISTER_METHOD(
        0x02894E00,
        app::Enumerable_Iterator_1_UnityEngine_Rect_*,
        Clone_2,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0289AE20,
        bool,
        MoveNext_2,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0289A7C0,
        app::IEnumerable_1_UnityEngine_Rect_*,
        Where_2,
        app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect__1* this_ptr,
        app::Func_2_UnityEngine_Rect_Boolean_* predicate
    )
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_UnityEngine_Rect_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Object_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_System_Collection_Generi_KeyValuePai_2_Syste_Objec__1.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePai_2_Syste_Objec_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object_.h>
#include <Modloader/app/structs/Func_2_System_Collections_Generic_KeyValuePair_2_Object__1.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Object_System_Int32_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_Object_System_Object_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Int32_*, Select_1, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::Func_2_Object_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Object_*, Select_2, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::Func_2_Object_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Single_*, Select_3, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::Func_2_Object_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_UnityEngine_Rect_*, Select_4, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::Func_2_Object_UnityEngine_Rect_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Int32_*, Select_5, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::Func_2_Object_Int32_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Object_*, Select_6, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::Func_2_Object_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_System_Single_*, Select_7, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::Func_2_Object_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x00E775A0, app::IEnumerable_1_UnityEngine_Rect_*, Select_8, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::Func_2_Object_UnityEngine_Rect_* selector))
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor_1, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::List_1_KeyValuePair_2_System_Object_System_Int32_* source, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__4* predicate, app::Func_2_System_Collections_Generic_KeyValuePair_2_Object__1* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Object_*, Clone_1, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289ABE0, bool, MoveNext_1, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Object_*, Where_1, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_ * this_ptr, app::Func_2_Object_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor_2, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::List_1_KeyValuePair_2_System_Object_System_Object_* source, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__3* predicate, app::Func_2_System_Collections_Generic_KeyValuePair_2_Object_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Object_*, Clone_2, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289ABE0, bool, MoveNext_2, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Object_*, Where_2, (app::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object__1 * this_ptr, app::Func_2_Object_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Collections_Generic_KeyValuePair_2_System_Object_

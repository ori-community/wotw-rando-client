#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Boolean_.h>
#include <Modloader/app/structs/Func_2_Boolean_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr, app::List_1_UnityEngine_Rect_* source, app::Func_2_UnityEngine_Rect_Boolean_* predicate, app::Func_2_UnityEngine_Rect_Boolean_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Boolean_*, Clone, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289BB60, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_System_Boolean_*, Where, (app::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_ * this_ptr, app::Func_2_Boolean_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_UnityEngine_Rect_System_Boolean_

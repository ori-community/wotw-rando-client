#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Boolean_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00E776D0, app::IEnumerable_1_System_Boolean_*, Select_1, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_* selector))
    IL2CPP_REGISTER_METHOD(0x00E776D0, app::IEnumerable_1_System_Single_*, Select_2, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x02894D90, void, ctor, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::List_1_System_Object_* source, app::Func_2_Object_Boolean_* predicate, app::Func_2_Object_UnityEngine_Rect_* selector))
    IL2CPP_REGISTER_METHOD(0x02894E00, app::Enumerable_Iterator_1_UnityEngine_Rect_*, Clone, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289BA30, bool, MoveNext, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A7C0, app::IEnumerable_1_UnityEngine_Rect_*, Where, (app::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectListIterator_2_System_Object_UnityEngine_Rect_

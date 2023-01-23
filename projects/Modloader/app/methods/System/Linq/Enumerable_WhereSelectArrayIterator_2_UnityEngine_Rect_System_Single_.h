#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Boolean_.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Single_.h>
#include <Modloader/app/structs/Enumerable_Iterator_1_System_Single_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Single_.h>
#include <Modloader/app/structs/Func_2_Single_Boolean_.h>

namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_ * this_ptr, app::Rect__Array* source, app::Func_2_UnityEngine_Rect_Boolean_* predicate, app::Func_2_UnityEngine_Rect_Single_* selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Single_*, Clone, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895540, bool, MoveNext, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895050, app::IEnumerable_1_System_Single_*, Where, (app::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_ * this_ptr, app::Func_2_Single_Boolean_* predicate))
} // namespace app::classes::System::Linq::Enumerable_WhereSelectArrayIterator_2_UnityEngine_Rect_System_Single_

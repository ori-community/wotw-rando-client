#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02895170, void, ctor, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ * this_ptr, app::IEnumerable_1_UnityEngine_Rect_ * source, app::Func_2_UnityEngine_Rect_Boolean_ * predicate, app::Func_2_UnityEngine_Rect_Single_ * selector))
    IL2CPP_REGISTER_METHOD(0x028951E0, app::Enumerable_Iterator_1_System_Single_ *, Clone, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A040, void, Dispose, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0289A100, bool, MoveNext, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02896570, app::IEnumerable_1_System_Single_ *, Where, (app::Enumerable_WhereSelectEnumerableIterator_2_UnityEngine_Rect_System_Single_ * this_ptr, app::Func_2_Single_Boolean_ * predicate))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00E77C70, app::IEnumerable_1_System_Boolean_ *, Select_1, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E77C70, app::IEnumerable_1_System_Single_ *, Select_2, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Single_ * selector))
    IL2CPP_REGISTER_METHOD(0x02893370, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr, app::IEnumerable_1_UnityEngine_Rect_ * source, app::Func_2_UnityEngine_Rect_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028933C0, app::Enumerable_Iterator_1_UnityEngine_Rect_ *, Clone, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893B30, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893BF0, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893770, app::IEnumerable_1_UnityEngine_Rect_ *, Where, (app::Enumerable_WhereEnumerableIterator_1_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_ * predicate))
}
